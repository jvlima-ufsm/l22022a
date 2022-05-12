
# T3 - Editor de texto gráfico com Caca

## Deadline

Prazo: **19/05/2022 (Qui)** pelo link do GitHub (https://classroom.github.com/a/kh7u5EKO).

Você deve escolher seu nome na lista de alunos. Em seguida, o GitHub irá criar um repositório deste trabalho em seu usuário.

## Descrição

O objetivo deste  trabalho consiste em desenvolver um editor de texto gráfico
que utiliza alocação dinâmica de memória.

Os comandos básicos são:
- ESQ: sair do editor.
- CTRL+D: gravar arquivo e sair do modo edição.
- ENTER: quebra linha.
- END: cursor fica no fim de linha, após o último caractere
- HOME: cursor move para o começo da linha.
- BACKSPACE: remove o caractere antes do curso, e move o curso uma posição a esquerda. Pode unir duas linhas.
Outros comandos podem ser adicionados.

O editor deve trabalhar com os arquivos:
- `texto.txt` como entrada.
- `saida.txt` como saída.

O laço principal do programa será:
```c++
int main(int argc, char **argv) {
  Editor editor;

  editor.inicia();
  editor.carrega("texto.txt");
  editor.legenda();
  
  while (editor.verifica_fim() == false) {
    editor.atualiza();
  }
  editor.finaliza();
  
  return 0;
}
```


A alocação dinâmica deve utilizar `new` e `delete` como no trabalho anterior.
As linhas do texto podem continuar dentro de um `std::vector`.

As funções mínimas para o editor são:
- `carrega()` : carrega, ou lê, um arquivo texto.
- `salva()` : salva o conteúdo em um arquivo texto.
- `move_esq()`, `move_dir()`, `move_cima()`, `move_baixo()` : Devem ser completadas nos exemplos dados.  Move a posição do cursor na direção indicada pelo nome da função. Para a esquerda, para cima e para baixo, não deve sair dos limites do texto. Para a direita, não há limite.
- `insere_char()` : Insere o caractere c na posição do cursor. Deve alocar uma nova região de memória grande o suficiente para conter a linha após a inserção, e copiar o conteúdo da linha antiga, alterada com a inserção do caractere novo. Caso a linha do cursor seja mais curta que a posição do cursor, devem ser inseridos espaços no final da linha, para que o caractere inserido fique na posição correta. A memória ocupada pela linha antiga deve ser liberada e o ponteiro da linha no vetor alterado para apontar para a nova região de memória com a nova versão da linha. Após a inserção, o cursor deve ser movido uma coluna à direita (usar a função acima).
- `remove_char()` : Remove o caractere na posição do cursor no texto apontado por txt. Como na inserção, deve alocar uma nova área de memória para conter a nova versão da linha. Caso o cursor esteja além do final da linha, a função não deve fazer nada. A posição do cursor não deve ser alterada.
- `gruda_linha()` : Se o cursor não estiver na última linha do texto, anexa a linha seguinte à do cursor ao final da linha do cursor, e remove a linha abaixo do cursor da lista.
- `quebra_linha()` : Quebra a linha do cursor na posição do cursor. A linha com o cursor terminará com o caractere logo antes do cursor, e a linha seguinte conterá os caracteres a partir da posição do cursor. Se o cursor estiver além do final da linha, a linha do cursor permanece inalterada e é inserida uma linha vazia após o cursor. Deve ser realocada a memória para a linha do cursor (se ela mudar) e liberada a memória antiga, alocada memória para a nova linha, inserida a nova linha no vetor de linhas. Editor não pode estar em modo edição.

Detalhes que serão considerados na avaliação:
- Todas as funções devem ser encapsuladas dentro de uma `struct`.
- As variáveis que controlam a tela da `libcaca` devem estar dentro da
  `struct` Editor.
- Crie funções de tela dentro da `struct`, evite chamar funções da
  `libcaca` diretamente.


Abaixo, um exemplo de `struct` com as funções mínimas descritas. Outras funções podem ser adicionadas.
```c++
// Estrutura  do Editor
struct Editor {
  std::vector<char*> linhas;

  void insere(std::string& linha)
  {
    // incluir alocação dinâmica aqui
    linhas.push_back( linha.c_str() );
  }

  char* remove(void)
  {
    char* l = linhas.back(); // pega ultima linha
    linhas.pop_back(); // remove ultima linha
    return l;
  }

  int tamanho(void) const
  {
    return linhas.size();
  }

  void destroi(void)
  {
    // libera toda a memória
  }

  void carrega(std::string entrada)
  { }

  void salva(std::string saida)
  { }

  void move_esq(void)
  { }

  void move_dir(void)
  { }
  
  void move_cima(void)
  { }

  void move_baixo(void)
  { }
  
  void insere_char(const char c){
      // finalizar
  }

  void remove_char(void)
  { }

  void gruda_linha(void)
  { }

  void quebra_linha(void)
  { }

  // pode adicionar mais funcoes!
}; // fim do editor
```

A implementação deve utilizar a **libcaca**. Baixe o programa exemplo
[aqui](exemplo-caca.cpp). É necessário instalar a biblioteca libcaca para gráficos. Em um
sistema Ubuntu digite:
```
sudo apt install libcaca-dev
```
Documentação em: http://caca.zoy.org/doxygen/

No Windows, procure no site http://caca.zoy.org/wiki/libcaca. Quem
utiliza um sistema Linux pode compilar o programa digitando:
```
g++ -Wall  -o exemplo-caca exemplo-caca.cpp -lcaca
```

## Dicas
- Utilize `std::string` como forma de ler palavras ou linhas do texto.
- Guarde cada linha lida em um `std::vector` de tipo `char*` alocado dinâmicamente.
- Veja como ler uma linha inteira [aqui](../..//aulas/introducao_cxx#entrada-e-saída)
- O código abaixo é um exemplo de como converter `std:string` para `char*`

## Como simular a libcaca para correção 

O "simulador" de libcaca elimina a parte gráfica e envia comandos para simular 
um usuário. Essa versão não implementa todas as funções da libcaca e usa apenas as principais.

Primeiro compile o seu programa com o arquivo [libcaca.cpp](libcaca.cpp):
```
$ g++ -Wall -g -o exemplo-caca exemplo-caca.cpp
```

A saída esperada do Valgrind será:
```
$ valgrind --leak-check=full ./a.out 
==780087== Memcheck, a memory error detector
==780087== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==780087== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info
==780087== Command: ./a.out
==780087== 
==780087== 
==780087== HEAP SUMMARY:
==780087==     in use at exit: 0 bytes in 0 blocks
==780087==   total heap usage: 42 allocs, 42 frees, 95,019 bytes allocated
==780087== 
==780087== All heap blocks were freed -- no leaks are possible
==780087== 
==780087== For lists of detected and suppressed errors, rerun with: -s
==780087== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```

**NÃO MODIFIQUE O ARQUIVO**: os comandos da correção não podem ser alterados.

## Regras

- Usar somente C++!
- Obrigatório: `new` e `delete` para alocação dinâmica
- Podem utilizar `std::vector`
- A correção utilizará principalmente o `valgrind`
- Não compila, zero.
- Plágio, zero.