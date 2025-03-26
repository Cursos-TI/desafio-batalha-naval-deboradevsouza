#include    <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main () {

    int tabuleiro[LINHAS][COLUNAS] = {0};
    int i, j;

    printf(" *** Bem vindo ao jogo Batalha-Naval *** \n");
    printf(" *** O tabuleiro está vazio ***\n \n");

    for (i=0; i<LINHAS; i++){
        for (j=0; j<COLUNAS; j++){
            printf("%d ", tabuleiro[i][j]);
        } printf("\n");
    }

    printf("\nPosicionando o primeiro navio de 3 posições:\n \n");
    tabuleiro[0][0] = 3;
    tabuleiro[0][1] = 3;
    tabuleiro[0][2] = 3;

    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            printf("%d ", tabuleiro[i][j]);
        } printf("\n");
    }

    printf("\nPosicionando o segundo navio de 3 posições:\n \n");
    tabuleiro[4][3] = 3;
    tabuleiro[5][3] = 3;
    tabuleiro[6][3] = 3;

    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            printf("%d ", tabuleiro[i][j]);
        } printf("\n");
    }

    printf("\nPosicionando o terceiro navio de 3 posições:\n \n");
    tabuleiro[3][5] = 3;
    tabuleiro[4][6] = 3;
    tabuleiro[5][7] = 3;

    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            printf("%d ", tabuleiro[i][j]);
        } printf("\n");
    }

    printf("\nPosicionando o quarto navio de 3 posições:\n \n");
    tabuleiro[0][8] = 3;
    tabuleiro[1][7] = 3;
    tabuleiro[2][6] = 3;

    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            printf("%d ", tabuleiro[i][j]);
        } printf("\n");
    }



    return 0;
}