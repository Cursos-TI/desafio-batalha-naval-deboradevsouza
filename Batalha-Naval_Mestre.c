#include    <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int tabuleiro[LINHAS][COLUNAS] = {0};

int main () {

    int i, j;

    printf(" *** Bem vindo ao jogo Batalha-Naval *** \n");
    printf(" *** O tabuleiro está vazio ***\n \n");

    for (i=0; i<LINHAS; i++){
        for (j=0; j<COLUNAS; j++){
            printf("%d ", tabuleiro[i][j]);
        } printf("\n");
    }

    //Criando matrizes de habilidade:
    printf("\n *** Criando as Habilidades *** \n");
    printf(" *** Cone *** \n");
    printf(" A habilidade Cone será representada com o número 1 \n");
    //Habilidade Cone:
    for (i=0; i<LINHAS; i++){
        for (j=0; j<COLUNAS; j++){
            if(tabuleiro[i][j] == 0){
                tabuleiro[0][7] = 1;
                tabuleiro[1][7] = 1;
                tabuleiro[1][7-1] = 1;
                tabuleiro[1][7+1] = 1;
                tabuleiro[2][7] = 1;
                tabuleiro[2][7-1] = 1;
                tabuleiro[2][7-2] = 1;
                tabuleiro[2][7+1] = 1;
                tabuleiro[2][7+2] = 1;
            } printf("%d ", tabuleiro[i][j]);
        } printf("\n");
    }

    printf(" *** Cruz *** \n");
    printf(" A habilidade Cruz será representada com o número 2 \n");
    //Habilidade Cruz:
    for (i=0; i<LINHAS; i++){
        for (j=0; j<COLUNAS; j++){
            if(tabuleiro[i][j] == 0){
                tabuleiro[3][3] = 2;
                tabuleiro[3][3-1] = 2;
                tabuleiro[3][3-2] = 2;
                tabuleiro[3][3+1] = 2;
                tabuleiro[3][3+2] = 2;
                tabuleiro[3-1][3] = 2;
                tabuleiro[3-2][3] = 2;
                tabuleiro[3+1][3] = 2;
                tabuleiro[3+2][3] = 2;
            } printf("%d ", tabuleiro[i][j]);
        } printf("\n");
    }

    printf(" *** Octaedro *** \n");
    printf(" A habilidade Octaedro será representada com o número 3 \n");
    //Habilidade octaedro:
    for (i=0; i<LINHAS; i++){
        for (j=0; j<COLUNAS; j++){
            if(tabuleiro[i][j] == 0){
                tabuleiro[8][7] = 3;
                tabuleiro[8][7-1] = 3;
                tabuleiro[8][7+1] = 3;
                tabuleiro[8-1][7] = 3;
                tabuleiro[8+1][7] = 3;
            } printf("%d ", tabuleiro[i][j]);
        } printf("\n");
    }

    return 0;
}