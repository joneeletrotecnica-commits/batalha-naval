#include <stdio.h>

// Programa simples de Batalha Naval em C

#define TAM 5

int main() {
    int tabuleiro[TAM][TAM] = {0};
    int linhaNavio = 2;
    int colunaNavio = 3;

    int tiroLinha = 2;
    int tiroColuna = 3;

    tabuleiro[linhaNavio][colunaNavio] = 1;

    printf("Tiro em (%d, %d)\n", tiroLinha, tiroColuna);

    if (tabuleiro[tiroLinha][tiroColuna] == 1) {
        printf("Acertou o navio!\n");
    } else {
        printf("Agua!\n");
    }

    return 0;
}
