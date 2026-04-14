# The Legend of Kily

## Descrição do Projeto
Este projeto consiste em um **arcade em linguagem C**, desenvolvido para execução em console, contendo três minijogos totalmente interativos:

-  Karruti (Perguntas e respostas)  
-  Jogo do Pão (Baseado em Cobra na Caixa)  
-  Gousmas War (Jogo de estratégia por turnos)  

O objetivo do projeto é aplicar conceitos fundamentais de programação, como:

- Estruturas condicionais (`if`, `switch`)
- Estruturas de repetição (`while`, `do while`)
- Vetores (arrays)
- Funções
- Manipulação de entrada do usuário
- Lógica de jogo

---

## Funcionamento Geral

Ao iniciar o programa, o usuário acessa um menu principal onde pode escolher entre os três minijogos ou sair.

Cada jogo possui:

- Menu próprio
- Descrição
- Sistema independente

---

## Minijogos

### Karruti
Jogo de perguntas e respostas com 5 questões.

- Cada pergunta possui apenas uma alternativa correta
- O jogador acumula acertos e erros
- Possui um Easter Egg 👀

---

### Jogo do Pão
Inspirado no jogo “Cobra na Caixa”.

- Dois jogadores escolhem nomes
- Existem 5 caixas:
  - 1 contém o botão (vitória)
  - 1 contém o pão mítico envenenado (derrota)
- As posições são aleatórias a cada partida (Foi utilizado o sistema de sRand para randomizar)
- Não é possível escolher caixas já abertas

---

### Gousmas War
Jogo de estratégia por turnos.

- Cada jogador possui 2 Gousmas(Summons) com fúria inicial igual a 1
- Se a fúria passar de 5, a Gousma é destruída

Ações disponíveis:
- **Atacar** → aumenta a fúria do inimigo
- **Dividir** → redistribui a fúria entre suas Gousmas

- Gousmas podem ser revividas
- O jogo termina quando um jogador perde as duas Gousmas

---

## Tecnologias Utilizadas

- Linguagem: C
- Bibliotecas:
  - `stdio.h`
  - `stdlib.h`
  - `time.h`
  - `windows.h`
  - `locale.h`

---

## Randomização

O projeto utiliza:

```c
srand(time(NULL));
```
---

## Referências e Materiais de Apoio

Durante o desenvolvimento do projeto, foram utilizados os seguintes materiais para estudo e apoio:

- https://cplusplus.com/reference/cstdio/
- https://cplusplus.com/reference/ctime/
- https://www.youtube.com/watch?v=eE9MnoS0lc0
- https://www.youtube.com/watch?v=CJ37J_Cdd8Q

### Inteligência Artificial
- https://chat.openai.com/

Utilizada para:
- Auxílio na lógica de programação
- Correção de erros
- Sugestões de melhoria
- Explicação de conceitos
- Foi Utilizada para fazer o final do Jogo do Pão, principalmente para o sRand.
- Foi utilizada 100% na parte do Gousmas por falta de conhecimento e entendimento do assunto.
