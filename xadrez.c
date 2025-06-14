#include <stdio.h>

int main() {
    // ----------------------
    // Simulação do movimento da TORRE
    // ----------------------
    int movimentosTorre = 5;

    printf("Movimento da Torre:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    // ----------------------
    // Simulação do movimento do BISPO
    // ----------------------
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
    int movimentosRainha = 8;
    int contadorRainha = 0;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);

    // ----------------------
    // Simulação do movimento do CAVALO
    // ----------------------
    // O Cavalo se move em "L": duas casas para baixo e uma para a esquerda.
    // Usamos um loop for externo (para as duas casas para baixo)
    // e um loop while interno (para a casa à esquerda)

    int movimentosVerticais = 2; // duas casas para baixo
    int movimentosHorizontais = 1; // uma casa para a esquerda

    printf("\nMovimento do Cavalo:\n");

    // Loop externo (for): duas casas para baixo
    for (int i = 0; i < movimentosVerticais; i++) {
        printf("Baixo\n");
        // Loop interno (while): só entra após cada movimento para baixo
        int j = 0;
        while (j < movimentosHorizontais && i == movimentosVerticais - 1) {
            // Só move para a esquerda após os dois movimentos para baixo
            printf("Esquerda\n");
            j++;
        }
    }

    return 0;
}
