
# T2 - Processador de texto

## Deadline

Prazo: **10/05/2022 (Ter)** pelo link do GitHub (https://classroom.github.com/a/JdGzDPfm).

Você deve escolher seu nome na lista de alunos. Em seguida, o GitHub irá criar um repositório deste trabalho em seu usuário.

## Descrição

O objetivo deste T2 é imprimir algumas informações sobre um texto digitado pelo usuário:
- (Geral) Número de linhas
- (Geral) Número de linhas vazias
- (Geral) Número total de caracteres
- Número de espaços
- Número de vogais

O programa fará a leitura do texto da entrada padrão (`std::cin`) e deve formatar a saída no formato abaixo:
```
NumeroDeLinhasTotal NumeroDeLinhasVazias NumeroDeCaracteresTotal
NumeroDeEspacosLinha1 NumeroDeVogaisLinha1
NumeroDeEspacosLinha2 NumeroDeVogaisLinha2
NumeroDeEspacosLinha3 NumeroDeVogaisLinha3
....
NumeroDeEspacosLinhaN NumeroDeVogaisLinhaN
```

Ou seja, você deve calcular o número de palavras e caracteres em cada linha, assim como o total de linhas e caracteres somados. Em uma entrada exemplo abaixo:
```
um
dois tres
testando um programa

nada
```
A saída do programa deve ser:
```
$ ./t2
5 1 35
0 1
1 3
2 7
0 0
0 2
```
Se preferir, pode testar com arquivos texto maiores de entrada utilizando o redirecionamento de entrada do programa com o comando abaixo:
```
$ ./t2 < entrada.txt
```

## Dicas
- Utilize `std::string` como forma de ler palavras ou linhas do texto.
- Guarde cada linha lida em um `std::vector` de tipo `char*` alocado dinâmicamente.
- Veja como ler uma linha inteira [aqui](../..//aulas/introducao_cxx#entrada-e-saída)
- O código abaixo é um exemplo de como converter `std:string` para `char*`
```c++
#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char** argv)
{
    std::string palavra;
    char* vetor;

    std::cin >> palavra; // vai ler apenas uma palavra digitada

    if(palavra.size() > 0){ // testa se palavra nao eh vazia
        vetor = new char[palavra.size() + 1]; // aloca tamanho da palavra mais 1 para `\0' no fim

        strncpy(vetor, palavra.c_str(), palavra.size());  // copia n bytes

        vetor[palavra.size()] = '\0'; // copia '\0' no fim apenas por garantia

        std::cout << "Copiado "  << palavra.size() <<  " bytes no vetor: " << vetor << std::endl;

        delete[] vetor; // libera memoria
    }
    return 0;
}
```

## Regras

- Usar somente C++!
- Obrigatório: `new` e `delete` para alocação dinâmica
- Podem utilizar `std::vector`
- A correção utilizará principalmente o `valgrind`
- Não compila, zero.
- Plágio, zero.