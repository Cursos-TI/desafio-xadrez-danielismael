#include <stdio.h>

// ------------------------------------
// Função recursiva para o movimento da Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;

    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// ------------------------------------
// Função recursiva para o movimento da Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;

    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// ------------------------------------
// Função recursiva para o movimento do Bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;

    // Loop aninhado: vertical externo, horizontal interno
    for (int i = 0; i < vertical; i++) {
        for (int j = 0; j < horizontal; j++) {
            // Diagonal: Cima Direita
            printf("Cima Direita\n");
        }
    }

    // Chamada recursiva com valores decrementados
    moverBispo(vertical - 1, horizontal - 1);
}

// ------------------------------------
// Movimento do Cavalo com loops aninhados e controle de fluxo
void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < movimentosVerticais; i++) {
        if (i == 1) {
            for (int j = 0; j < movimentosHorizontais + 1; j++) {
                if (j == 0) continue;  // Ignora j==0 para mostrar apenas o segundo passo
                if (j > 1) break;     // Não ultrapassa uma casa

                printf("Direita\n");
            }
        }
        printf("Cima\n");
    }
}

// ------------------------------------
// Função principal
int main() {
    // Quantidade de casas por peça
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispoVertical = 1;  // Um movimento completo diagonal de 5 casas
    int casasBispoHorizontal = 5;

    // TORRE
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // BISPO
    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);

    // RAINHA
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // CAVALO
    printf("\n");
    moverCavalo();

    return 0;
}
