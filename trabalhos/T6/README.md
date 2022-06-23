
# T6 - AVL Invaders

## Deadline

Prazo: **28/07/2022 (Qui)** pelo link do GitHub (TODO).

Se necessário, você deve escolher seu nome na lista de alunos. Em seguida, o GitHub irá criar um repositório deste trabalho em seu usuário.

## Descrição

> Desbrave os perigos e trapaças das cabulosas árvores degeneradas. Organize os terríveis invasores com árvores balanceadas AVL e conquiste sua nota!

Este trabalho consiste na implementação do jogo **Space Invaders**. Os invasores devem
ser organizados por uma representação de árvore binária de busca (ABB) balanceada AVL. A
ABB terá movimentos para os lados e para baixo. Cada remoção resultará no re-balanceamento da árvore.
 
O jogo termina quando:
- Um invasor chegou no fim inferior tela, ou seja, perdeu o jogo.
- A árvore de invasores foi destruída, ganhando o jogo.

Os arquivos de exemplo, com o esqueleto do programa principal, estará disponível em seu repositório Git criado. Use os mesmos conceitos do trabalho anterior (T5).

O que deve ser feito no trabalho:
- **Invaders** - uma árvore ABB AVL deve armazenar os invasores. 
              Ela pode aumentar de tamanho e velocidade conforme
               a dificuldade aumenta. Também, quando ela chega nas
               extremidades horizontais ela retorna.
- **Laser** - o laser deve ser capaz de lançar vários tiros em sequencia
           usando uma lista (já suportado). 
- **Lógica de término do jogo** - desenvolver toda a lógica para ganhar
     ou perder o jogo podendo ter pontuação.
- **Manipulação da árvore** - ela deve crescer a cada nível que desce, e
  diminuir cada vez que um tiro atinge. Note que é preciso re-organizar após acerto.
- **Dificuldade** - em cada nível, a velocidade pode aumentar, assim como o tamanho com   valores aleatórios.


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
- Procure materias sobre árvores ABB e AVL

## Regras

- Usar somente C++!
- Não compila, zero.
- Plágio, zero.