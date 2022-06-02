
# T5 - Centipede com listas

## Deadline

Prazo: **16/06/2022 (Qui)** pelo link do GitHub (https://classroom.github.com/a/DGcADqxg).

Se necessário, você deve escolher seu nome na lista de alunos. Em seguida, o GitHub irá criar um repositório deste trabalho em seu usuário.

## Descrição

Este trabalho consiste na implementação do jogo **Centipede**. Nele, uma
centopéia formada por vários retângulos desce a tela enquanto que o
jogador deve atacar com um laser. A centopéia move-se da esquerda para
direita, da direita para esquerda, de cima para baixo, sendo que ela
cresce a cada nível.

O jogo termina quando:
- A centopéia chegou no fim inferior tela, ou seja, perdeu o jogo.
- A centopéia foi destruída, ganhando o jogo.

O objetivo deste trabalho é usar listas C++ (`std::list`) no
contexto de um problema maior (o jogo). 
Os arquivos de exemplo, com o esqueleto do programa principal, estará disponível em seu repositório Git criado. 

O que deve ser feito no trabalho:
- **Centopéia** - uma lista `std::list` deve armazenar os objetivos da
               centopéia. Ela aumenta de tamanho e velocidade conforme
               a dificuldade aumenta. Também, quando ela chega nas
               extremidades horizontais ela retorna, ou seja, faz
               movimentos em formato `S`.
- **Laser** - o laser deve ser capaz de lançar vários tiros em sequencia
           usando uma lista (já suportado). 
- **Lógica de término do jogo** - desenvolver toda a lógica para ganhar
     ou perder o jogo podendo ter pontuação.
- **Manipulação da centopéia** - ela deve crescer a cada nível que desce, e
  diminuir cada vez que um tiro atinge. Note que é preciso re-organizar os blocos após acerto.
- **Dificuldade** - em cada nível, a velocidade da centpéia pode
                 aumentar, assim como o tamanho.


## Allegro

Será necessário instalar a biblioteca Allegro versão 5
para gráficos. Em um sistema Ubuntu digite:
```
sudo apt install liballegro5-dev
```

No Windows, procure no site (https://www.allegro.cc). Algumas tutorias estão disponíveis em:
- https://www.youtube.com/watch?v=euK18wyK7go
- MinGW https://packages.msys2.org/package/mingw-w64-x86_64-allegro-static

Quem utilizar um
sistema Linux pode compilar com o programa `make` digitando:
```
make
```

## Dicas
- Utilize `std::list` para organizar os blocos da centopéia.
- Consulte o material sobre [Listas em C++](../../aulas/09_listas) 

## Regras

- Usar somente C++!
- Obrigatório: `std::list`
- Não compila, zero.
- Plágio, zero.