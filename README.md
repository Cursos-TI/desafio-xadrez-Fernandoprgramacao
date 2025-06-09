# Desafio de Movimentação das Peças de Xadrez em C

Este projeto simula os movimentos das peças de xadrez Torre, Bispo, Rainha e Cavalo utilizando técnicas de recursividade e loops complexos em C.

## Descrição

O programa demonstra a movimentação das peças no tabuleiro de xadrez com as seguintes características:

- **Torre:** Movimenta-se 5 casas para a direita usando recursividade.
- **Bispo:** Movimenta-se 5 casas na diagonal para cima e à direita, implementado duas vezes: uma vez usando recursão e outra com loops aninhados.
- **Rainha:** Movimenta-se 8 casas para a esquerda utilizando recursividade.
- **Cavalo:** Simula o movimento em "L" (duas casas para cima e uma para a direita) usando loops aninhados com múltiplas variáveis e controle de fluxo (continue e break).

## Como Rodar

### Pré-requisitos

- Ter um compilador C instalado (ex: gcc).
- Terminal ou prompt de comando.

### Passos para compilar e executar

1. Clone ou baixe o projeto.
2. No terminal, navegue até o diretório do projeto.
3. Compile o código com:

```bash
gcc xadrez.c -o xadrez
