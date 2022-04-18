
# T1 - Distância percorrida com pontos

## Deadline

Prazo: **26/04/2022** pelo link do GitHub (https://classroom.github.com/a/76R0EQgj).

Você deve escolher seu nome na lista de alunos. Em seguida, o GitHub irá criar um repositório deste trabalho em seu usuário.

## Descrição

O objetivo deste T1 é  ler todos os pontos de um arquivo de entrada e calcular a distância percorrida. Cada par de pontos é uma coordenada 2D `(x,y)`.
O programa fará a leitura de pontos da entrada padrão (`std::cin`) como os números digitados abaixo:
```
2.2 9.5
2.2 9.5
6.5 4.8
5.2 8.3
1.7 9.2
5.3 1.4
7.5 1.1
1.3 8.5
7.3 4.5
4.9 9.8
4.6 1.3
```

Ou seja, você deve calcular a distância entre cada par de 2 pontos e somar todos para obter o total percorrido. A saída do programa deve ser:
```
$ ./t1 < pontos.txt
55.72
```

## Dicas

- As funções matemáticas `std::sqrt` e `sqrt::pow` estão no `#include <cmath>`
- A precisão pode ser definida pela função `std::setprecision` de `#include <iomanip>`

## Regras

- Usar somente C++!
- Podem utilizar `std::vector`
- Devem fazer uso de alguma estrutura de dados (`struct`)
- Não compila, zero.
- Plágio, zero.