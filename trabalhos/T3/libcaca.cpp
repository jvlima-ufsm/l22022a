
#include <caca.h>
#include <vector>

struct caca_display { };

static caca_display_t display;

static int tela_largura = 80;
static int tela_altura = 32;


static std::vector<caca_event_t> simul_eventos;

void simul_inicia_eventos(void)
{
    // ordem inversa de eventos
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_ESCAPE, 0, '\0'} );

    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_CTRL_D, 0, '\0'} );

    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_BACKSPACE, 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_HOME, 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, static_cast<int>('h'), 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, static_cast<int>('g'), 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, static_cast<int>('f'), 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, static_cast<int>('e'), 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_HOME, 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_DOWN, 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, static_cast<int>('d'), 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, static_cast<int>('c'), 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, static_cast<int>('b'), 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, static_cast<int>('a'), 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_HOME, 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_DOWN, 0, '\0'} );

    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, static_cast<int>('a'), 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_BACKSPACE, 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_DOWN, 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_DOWN, 0, '\0'} );

    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, static_cast<int>('b'), 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_BACKSPACE, 0, '\0'} );
    for(auto i = 0; i < 5; i++)
        simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_RIGHT, 0, '\0'} );
    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, CACA_KEY_END, 0, '\0'} );

    simul_eventos.push_back( {CACA_EVENT_KEY_PRESS, static_cast<int>('a'), 0, '\0'} );
}

caca_canvas_t * caca_create_canvas(int, int)
{ return 0; }
int caca_manage_canvas(caca_canvas_t *, int (*)(void *), void *)
{ return 0; }
int caca_unmanage_canvas(caca_canvas_t *, int (*)(void *), void *)
{ return 0; }
int caca_set_canvas_size(caca_canvas_t *, int, int)
{ return 0; }
int caca_get_canvas_width(caca_canvas_t const *)
{ return tela_largura; }
int caca_get_canvas_height(caca_canvas_t const *)
{ return tela_altura; }
uint32_t const * caca_get_canvas_chars(caca_canvas_t const *)
{ return 0; }
uint32_t const * caca_get_canvas_attrs(caca_canvas_t const *)
{ return 0; }
int caca_free_canvas(caca_canvas_t *)
{ return 0; }
int caca_rand(int, int)
{ return 0; }
char const * caca_get_version(void)
{ return 0; }

int caca_gotoxy(caca_canvas_t *, int, int)
{ return 0; }
int caca_wherex(caca_canvas_t const *)
{ return 0; }
int caca_wherey(caca_canvas_t const *)
{ return 0; }
int caca_put_char(caca_canvas_t *, int, int, uint32_t)
{ return 0; }
uint32_t caca_get_char(caca_canvas_t const *, int, int)
{ return 0; }
int caca_put_str(caca_canvas_t *, int, int, char const *)
{ return 0; }
int caca_printf(caca_canvas_t *, int, int, char const *, ...)
{ return 0; }
int caca_vprintf(caca_canvas_t *, int, int, char const *, va_list)
{ return 0; }
int caca_clear_canvas(caca_canvas_t *)
{ return 0; }
int caca_set_canvas_handle(caca_canvas_t *, int, int)
{ return 0; }
int caca_get_canvas_handle_x(caca_canvas_t const *)
{ return 0; }
int caca_get_canvas_handle_y(caca_canvas_t const *)
{ return 0; }
int caca_blit(caca_canvas_t *, int, int, caca_canvas_t const *,
                       caca_canvas_t const *)
{ return 0; }
int caca_set_canvas_boundaries(caca_canvas_t *, int, int, int, int)
{ return 0; }


int caca_disable_dirty_rect(caca_canvas_t *)
{ return 0; }
int caca_enable_dirty_rect(caca_canvas_t *)
{ return 0; }
int caca_get_dirty_rect_count(caca_canvas_t *)
{ return 0; }
int caca_get_dirty_rect(caca_canvas_t *, int, int *, int *,
                                 int *, int *)
{ return 0; }
int caca_add_dirty_rect(caca_canvas_t *, int, int, int, int)
{ return 0; }
int caca_remove_dirty_rect(caca_canvas_t *, int, int, int, int)
{ return 0; }
int caca_clear_dirty_rect_list(caca_canvas_t *)
{ return 0; }


int caca_invert(caca_canvas_t *)
{ return 0; }
int caca_flip(caca_canvas_t *)
{ return 0; }
int caca_flop(caca_canvas_t *)
{ return 0; }
int caca_rotate_180(caca_canvas_t *)
{ return 0; }
int caca_rotate_left(caca_canvas_t *)
{ return 0; }
int caca_rotate_right(caca_canvas_t *)
{ return 0; }
int caca_stretch_left(caca_canvas_t *)
{ return 0; }
int caca_stretch_right(caca_canvas_t *)
{ return 0; }


uint32_t caca_get_attr(caca_canvas_t const *, int, int)
{ return 0; }
int caca_set_attr(caca_canvas_t *, uint32_t)
{ return 0; }
int caca_unset_attr(caca_canvas_t *, uint32_t)
{ return 0; }
int caca_toggle_attr(caca_canvas_t *, uint32_t)
{ return 0; }
int caca_put_attr(caca_canvas_t *, int, int, uint32_t)
{ return 0; }
int caca_set_color_ansi(caca_canvas_t *, uint8_t, uint8_t)
{ return 0; }
int caca_set_color_argb(caca_canvas_t *, uint16_t, uint16_t)
{ return 0; }
uint8_t caca_attr_to_ansi(uint32_t)
{ return 0; }
uint8_t caca_attr_to_ansi_fg(uint32_t)
{ return 0; }
uint8_t caca_attr_to_ansi_bg(uint32_t)
{ return 0; }
uint16_t caca_attr_to_rgb12_fg(uint32_t)
{ return 0; }
uint16_t caca_attr_to_rgb12_bg(uint32_t)
{ return 0; }
void caca_attr_to_argb64(uint32_t, uint8_t[8])
{  }



/** \defgroup caca_charset libcaca character set conversions
 *
 *  These functions perform conversions between usual character sets.
 *
 *  @{ */
uint32_t caca_utf8_to_utf32(char const *, size_t *){ return 0; }
size_t caca_utf32_to_utf8(char *, uint32_t){ return 0; }
uint8_t caca_utf32_to_cp437(uint32_t){ return 0; }
uint32_t caca_cp437_to_utf32(uint8_t){ return 0; }
char caca_utf32_to_ascii(uint32_t){ return 0; }
int caca_utf32_is_fullwidth(uint32_t){ return 0; }
/*  @} */

/** \defgroup caca_primitives libcaca primitives drawing
 *
 *  These functions provide routines for primitive drawing, such as lines,
 *  boxes, triangles and ellipses.
 *
 *  @{ */
int caca_draw_line(caca_canvas_t *, int, int, int, int, uint32_t){ return 0; }
int caca_draw_polyline(caca_canvas_t *, int const x[],
                                 int const y[], int, uint32_t){ return 0; }
int caca_draw_thin_line(caca_canvas_t *, int, int, int, int){ return 0; }
int caca_draw_thin_polyline(caca_canvas_t *, int const x[],
                                      int const y[], int){ return 0; }

int caca_draw_circle(caca_canvas_t *, int, int, int, uint32_t){ return 0; }
int caca_draw_ellipse(caca_canvas_t *, int, int, int, int, uint32_t){ return 0; }
int caca_draw_thin_ellipse(caca_canvas_t *, int, int, int, int){ return 0; }
int caca_fill_ellipse(caca_canvas_t *, int, int, int, int, uint32_t){ return 0; }

int caca_draw_box(caca_canvas_t *, int, int, int, int, uint32_t){ return 0; }
int caca_draw_thin_box(caca_canvas_t *, int, int, int, int){ return 0; }
int caca_draw_cp437_box(caca_canvas_t *, int, int, int, int){ return 0; }
int caca_fill_box(caca_canvas_t *, int, int, int, int, uint32_t){ return 0; }

int caca_draw_triangle(caca_canvas_t *, int, int, int, int, int,
                                 int, uint32_t){ return 0; }
int caca_draw_thin_triangle(caca_canvas_t *, int, int, int, int,
                                      int, int){ return 0; }
int caca_fill_triangle(caca_canvas_t *, int, int, int, int, int,
                                 int, uint32_t){ return 0; }
int caca_fill_triangle_textured(caca_canvas_t *cv,
                                         int coords[6],
                                         caca_canvas_t *tex,
                                         float uv[6]){ return 0; }
/*  @} */

/** \defgroup caca_frame libcaca canvas frame handling
 *
 *  These functions provide high level routines for canvas frame insertion,
 *  removal, copying etc.
 *
 *  @{ */
int caca_get_frame_count(caca_canvas_t const *){ return 0; }
int caca_set_frame(caca_canvas_t *, int){ return 0; }
char const *caca_get_frame_name(caca_canvas_t const *){ return 0; }
int caca_set_frame_name(caca_canvas_t *, char const *){ return 0; }
int caca_create_frame(caca_canvas_t *, int){ return 0; }
int caca_free_frame(caca_canvas_t *, int){ return 0; }
/*  @} */

/** \defgroup caca_dither libcaca bitmap dithering
 *
 *  These functions provide high level routines for dither allocation and
 *  rendering.
 *
 *  @{ */
caca_dither_t *caca_create_dither(int, int, int, int,
                                             uint32_t, uint32_t,
                                             uint32_t, uint32_t){ return 0; }
int caca_set_dither_palette(caca_dither_t *,
                                      uint32_t r[], uint32_t g[],
                                      uint32_t b[], uint32_t a[]){ return 0; }
int caca_set_dither_brightness(caca_dither_t *, float){ return 0; }
float caca_get_dither_brightness(caca_dither_t const *){ return 0; }
int caca_set_dither_gamma(caca_dither_t *, float){ return 0; }
float caca_get_dither_gamma(caca_dither_t const *){ return 0; }
int caca_set_dither_contrast(caca_dither_t *, float){ return 0; }
float caca_get_dither_contrast(caca_dither_t const *){ return 0; }
int caca_set_dither_antialias(caca_dither_t *, char const *){ return 0; }
char const * const * caca_get_dither_antialias_list(caca_dither_t
                                                              const *){ return 0; }
char const * caca_get_dither_antialias(caca_dither_t const *){ return 0; }
int caca_set_dither_color(caca_dither_t *, char const *){ return 0; }
char const * const * caca_get_dither_color_list(caca_dither_t
                                                          const *){ return 0; }
char const * caca_get_dither_color(caca_dither_t const *){ return 0; }
int caca_set_dither_charset(caca_dither_t *, char const *){ return 0; }
char const * const * caca_get_dither_charset_list(caca_dither_t
                                                            const *){ return 0; }
char const * caca_get_dither_charset(caca_dither_t const *){ return 0; }
int caca_set_dither_algorithm(caca_dither_t *, char const *){ return 0; }
char const * const * caca_get_dither_algorithm_list(caca_dither_t
                                                              const *){ return 0; }
char const * caca_get_dither_algorithm(caca_dither_t const *){ return 0; }
int caca_dither_bitmap(caca_canvas_t *, int, int, int, int,
                         caca_dither_t const *, void const *){ return 0; }
int caca_free_dither(caca_dither_t *){ return 0; }
/*  @} */

/** \defgroup caca_charfont libcaca character font handling
 *
 *  These functions provide character font handling routines.
 *
 *  @{ */
caca_charfont_t *caca_load_charfont(void const *, size_t){ return 0; }
int caca_free_charfont(caca_charfont_t *){ return 0; }
/*  @} */

/** \defgroup caca_font libcaca bitmap font handling
 *
 *  These functions provide bitmap font handling routines and high quality
 *  canvas to bitmap rendering.
 *
 *  @{ */
caca_font_t *caca_load_font(void const *, size_t){ return 0; }
char const * const * caca_get_font_list(void){ return 0; }
int caca_get_font_width(caca_font_t const *){ return 0; }
int caca_get_font_height(caca_font_t const *){ return 0; }
uint32_t const *caca_get_font_blocks(caca_font_t const *){ return 0; }
int caca_render_canvas(caca_canvas_t const *, caca_font_t const *,
                                 void *, int, int, int){ return 0; }
int caca_free_font(caca_font_t *){ return 0; }
/*  @} */

/** \defgroup caca_figfont libcaca FIGfont handling
 *
 *  These functions provide FIGlet and TOIlet font handling routines.
 *
 *  @{ */
int caca_canvas_set_figfont(caca_canvas_t *, char const *){ return 0; }
int caca_set_figfont_smush(caca_canvas_t *, char const *){ return 0; }
int caca_set_figfont_width(caca_canvas_t *, int){ return 0; }
int caca_put_figchar(caca_canvas_t *, uint32_t){ return 0; }
int caca_flush_figlet(caca_canvas_t *){ return 0; }
/*  @} */

/** \defgroup caca_file libcaca file IO
 *
 *  These functions allow to read and write files in a platform-independent
 *  way.
 *  @{ */
caca_file_t *caca_file_open(char const *, const char *){ return 0; }
int caca_file_close(caca_file_t *){ return 0; }
uint64_t caca_file_tell(caca_file_t *){ return 0; }
size_t caca_file_read(caca_file_t *, void *, size_t){ return 0; }
size_t caca_file_write(caca_file_t *, const void *, size_t){ return 0; }
char * caca_file_gets(caca_file_t *, char *, int){ return 0; }
int caca_file_eof(caca_file_t *){ return 0; }
/*  @} */

/** \defgroup caca_importexport libcaca importers/exporters from/to various
 *  formats
 *
 *  These functions import various file formats into a new canvas, or export
 *  the current canvas to various text formats.
 *
 *  @{ */
ssize_t caca_import_canvas_from_memory(caca_canvas_t *, void const *,
                                                size_t, char const *){ return 0; }
ssize_t caca_import_canvas_from_file(caca_canvas_t *, char const *,
                                              char const *){ return 0; }
ssize_t caca_import_area_from_memory(caca_canvas_t *, int, int,
                                              void const *, size_t,
                                              char const *){ return 0; }
ssize_t caca_import_area_from_file(caca_canvas_t *, int, int,
                                            char const *, char const *){ return 0; }
char const * const * caca_get_import_list(void){ return 0; }
void *caca_export_canvas_to_memory(caca_canvas_t const *,
                                            char const *, size_t *){ return 0; }
void *caca_export_area_to_memory(caca_canvas_t const *, int, int,
                                          int, int, char const *, size_t *){ return 0; }
char const * const * caca_get_export_list(void){ return 0; }
/*  @} */

/** \defgroup caca_display libcaca display functions
 *
 *  These functions provide the basic \e libcaca routines for display
 *  initialisation, system information retrieval and configuration.
 *
 *  @{ */
caca_display_t * caca_create_display(caca_canvas_t *cv)
{ 
    simul_inicia_eventos();
    return &display; 
}
caca_display_t * caca_create_display_with_driver(caca_canvas_t *,
                                                          char const *){ return 0; }
char const * const * caca_get_display_driver_list(void){ return 0; }
char const * caca_get_display_driver(caca_display_t *){ return 0; }
int caca_set_display_driver(caca_display_t *, char const *){ return 0; }
int caca_free_display(caca_display_t *dp)
{
    return 0; 
}
caca_canvas_t * caca_get_canvas(caca_display_t *){ return 0; }
int caca_refresh_display(caca_display_t *){ return 0; }
int caca_set_display_time(caca_display_t *, int){ return 0; }
int caca_get_display_time(caca_display_t const *){ return 0; }
int caca_get_display_width(caca_display_t const *){ return 0; }
int caca_get_display_height(caca_display_t const *){ return 0; }
int caca_set_display_title(caca_display_t *, char const *){ return 0; }
int caca_set_mouse(caca_display_t *, int){ return 0; }
int caca_set_cursor(caca_display_t *, int){ return 0; }
/*  @} */

/** \defgroup caca_event libcaca event handling
 *
 *  These functions handle user events such as keyboard input and mouse
 *  clicks.
 *
 *  @{ */
int caca_get_event(caca_display_t *dp, int t, caca_event_t *ev, int flag)
{
    if(simul_eventos.empty())
        return 0;
    *ev = simul_eventos.back();
    simul_eventos.pop_back();
    return 1;
}

int caca_get_mouse_x(caca_display_t const *){ return 0; }
int caca_get_mouse_y(caca_display_t const *){ return 0; }
enum caca_event_type caca_get_event_type(caca_event_t const *ev)
{
     return ev->type; 
}
int caca_get_event_key_ch(caca_event_t const *ev)
{ 
    return ev->data.key.ch; 
}
uint32_t caca_get_event_key_utf32(caca_event_t const *){ return 0; }
int caca_get_event_key_utf8(caca_event_t const *, char *){ return 0; }
int caca_get_event_mouse_button(caca_event_t const *){ return 0; }
int caca_get_event_mouse_x(caca_event_t const *){ return 0; }
int caca_get_event_mouse_y(caca_event_t const *){ return 0; }
int caca_get_event_resize_width(caca_event_t const *){ return 0; }
int caca_get_event_resize_height(caca_event_t const *){ return 0; }

