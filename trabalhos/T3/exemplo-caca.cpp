
/*
 * Programa exemplo de utilizacao da libcaca.
 * Instalacao em um sistema Debian/Ubuntu:
 * $ sudo apt install libcaca-dev
 * 
 * Documentacao em:
 * http://caca.zoy.org/doxygen/libcaca/index.html
*/

#include <iostream>
#include <caca.h>

int main(void)
{
    int sair = 1; // sinal para sair
    int cursor_x = 0; // coluna do cursor
    int cursor_y = 0; // linha do cursor
    caca_canvas_t *cv; caca_display_t *dp; caca_event_t ev;

    dp = caca_create_display(NULL);
    if(!dp)
        return 1;
    cv = caca_get_canvas(dp);
    caca_set_cursor(dp, 1);
    caca_set_mouse(dp, 1);
    caca_set_display_title(dp, "Editor Caca");
    caca_clear_canvas(cv);
    caca_set_color_ansi(cv, CACA_WHITE, CACA_BLACK);

    // Escreve linhas na tela
    caca_put_str(cv, 0, 0, "Essa linha e um teste");
    caca_put_str(cv, 0, 1, "Digite ESQ para sair.");
    caca_put_str(cv, 0, 2, "Digite END para limpar a tela.");
    caca_printf(cv, 0, 4, "Tamanho da tela: %d x %d", 
       caca_get_canvas_width(cv),  caca_get_canvas_height(cv));

    caca_gotoxy(cv, cursor_x, cursor_y);
    //caca_set_color_ansi(cv, CACA_WHITE, CACA_RED);
    //caca_put_char(cv, 1, 0, "This is a message");
    caca_refresh_display(dp);
    
    // laco principal
    while( sair != 0 ){
        while( caca_get_event(dp, CACA_EVENT_ANY, &ev, 0) ){
            if( caca_get_event_type(&ev) & CACA_EVENT_KEY_PRESS ){
                switch (caca_get_event_key_ch(&ev))
                {
                case CACA_KEY_ESCAPE:
                    sair = 0;
                    break;
                case CACA_KEY_END:
                    caca_clear_canvas(cv);
                    break;
                case CACA_KEY_UP:
                    // cima
                    std::cout << "Seta cima" << std::endl;
                    cursor_y--; // testar limites
                    caca_gotoxy(cv, cursor_x, cursor_y);
                    break;
                case CACA_KEY_DOWN:
                    // baixo
                    std::cout << "Seta baixo" << std::endl;
                    cursor_y++; // testar limites
                    caca_gotoxy(cv, cursor_x, cursor_y);
                    break;
                case CACA_KEY_LEFT:
                    // esquerda
                    std::cout << "Seta esquerda" << std::endl;
                    cursor_x--; // testar limites
                    caca_gotoxy(cv, cursor_x, cursor_y);
                    break;
                case CACA_KEY_RIGHT:
                    // direita
                    std::cout << "Seta direita" << std::endl;
                    cursor_x++; // testar limites
                    caca_gotoxy(cv, cursor_x, cursor_y);
                    break;
                case CACA_KEY_BACKSPACE:
                    std::cout << "Backspace" << std::endl;
                    break;
                case CACA_KEY_RETURN:
                    std::cout << "Enter" << std::endl;
                    break;
                
                default:
                    break;
                }
                // atualiza a tela
                caca_refresh_display(dp);
            }
            else if(caca_get_event_type(&ev) & CACA_EVENT_MOUSE_PRESS){
                std::cout << "Mouse! Btn pressionado: ";
                switch(caca_get_event_mouse_button(&ev)){
                    case 1:
                        std::cout << "esquerda" << std::endl;
                        break;
                    case 2: 
                        std::cout << "direita" << std::endl;
                        break;
                    case 3:
                        std::cout << "meio" << std::endl;
                        break;
                    default:
                        std::cout << "nao sei" << std::endl;
                }
            }
            else if(caca_get_event_type(&ev) & CACA_EVENT_MOUSE_MOTION){
                std::cout << "Mouse! Posicao: " << 
                    caca_get_event_mouse_x(&ev) << " " <<
                    caca_get_event_mouse_y(&ev) << std::endl;

            }
        } // while
    } // while
    caca_free_display(dp);
    return 0;
}

