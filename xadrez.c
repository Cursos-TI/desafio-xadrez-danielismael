#include <stdio.h>

int main() {
    // ----------------------
    // Simulação do movimento da TORRE
    // ----------------------
    // A Torre vai se mover 5 casas para a direita
    int movimentosTorre = 5;

    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    // ----------------------
    // Simulação do movimento do BISPO
    // ----------------------
    // O Bispo vai se mover 5 casas na diagonal (Cima + Direita)
    int movimentosBispo = 5;
    int contadorBispo = 0;

    printf("\nMovimento do Bispo:\n");
    while (contadorBispo < movimentosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // ----------------------
    // Simulação do movimento da RAINHA
    // ----------------------
    // A Rainha vai se mover 8 casas para a esquerda
    int movimentosRainha = 8;
    int contadorRainha = 0;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);

    return 0;
}

