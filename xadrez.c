#include <stdio.h>

// Constantes para número de casas a mover para cada peça
const int TORRE_PASSOS = 5;
const int BISPO_PASSOS = 5;
const int RAINHA_PASSOS = 8;

// ===== Funções Recursivas =====

// Movimento recursivo da Torre (para a direita)
void moverTorre(int passosRestantes) {
    if (passosRestantes == 0) return;  // Caso base: acabou os passos
    printf("Direita\n");
    moverTorre(passosRestantes - 1);   // Chamada recursiva diminuindo os passos
}

// Movimento recursivo da Rainha (para a esquerda)
void moverRainha(int passosRestantes) {
    if (passosRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(passosRestantes - 1);
}

// Movimento recursivo da diagonal do Bispo (Cima e Direita)
void moverBispoRecursivo(int passosRestantes) {
    if (passosRestantes == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(passosRestantes - 1);
}

// Movimento do Bispo com loops aninhados
// Loop externo: movimento vertical (cima)
// Loop interno: movimento horizontal (direita)
void moverBispoComLoops(int passosVertical, int passosHorizontal) {
    for (int i = 0; i < passosVertical; i++) {      // Movimento vertical (Cima)
        for (int j = 0; j < passosHorizontal; j++) { // Movimento horizontal (Direita)
            printf("Cima Direita\n");
        }
    }
}

// Movimento complexo do Cavalo em "L" para cima e direita
// Duas casas para cima e uma para a direita a cada movimento
void moverCavalo() {
    // O cavalo se move em L: 2 para cima + 1 para direita.
    // Vamos simular repetidos movimentos no tabuleiro usando loops aninhados com controle

    printf("Movimento do Cavalo (2 casas Cima + 1 Direita):\n");

    // Definindo limite para simulação (exemplo 3 movimentos do cavalo)
    const int maxMovimentos = 3;
    int movimentosFeitos = 0;

    // Variáveis que representam a posição atual do cavalo (não necessariamente usadas no output)
    int posVertical = 0;
    int posHorizontal = 0;

    // Loop externo para o movimento vertical (2 casas para cima)
    for (int vert = 0; vert < maxMovimentos; vert++) {
        // Loop interno para o movimento horizontal (1 casa para direita)
        for (int horiz = 0; horiz < 2; horiz++) {
            // A condição complexa controla que só uma casa direita é permitida após 2 casas para cima
            if (horiz == 1) {
                // Uma casa para direita após 2 para cima, finaliza movimento deste passo
                printf("Direita\n");
                movimentosFeitos++;
                if (movimentosFeitos >= maxMovimentos) break;  // Interrompe caso atinja max
            } else {
                printf("Cima\n");
                posVertical++;
            }
        }
        if (movimentosFeitos >= maxMovimentos) break;
    }
}


int main() {

    printf("Movimento Recursivo da Torre:\n");
    moverTorre(TORRE_PASSOS);

    printf("\nMovimento Recursivo do Bispo:\n");
    moverBispoRecursivo(BISPO_PASSOS);

    printf("\nMovimento do Bispo com Loops Aninhados:\n");
    // Para simplificação, o bispo move diagonal 5 casas, logo vertical=5 e horizontal=1 (ou vice-versa)
    moverBispoComLoops(BISPO_PASSOS, 1);

    printf("\nMovimento Recursivo da Rainha:\n");
    moverRainha(RAINHA_PASSOS);

    printf("\n");

    moverCavalo();

    return 0;
}
