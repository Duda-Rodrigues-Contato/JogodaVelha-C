#include <stdio.h>

void casasTabuleiro(char matrizCasas[3][3]) {

    printf("\t %c | %c | %c | \n", matrizCasas[0][0], matrizCasas[0][1], matrizCasas[0][2]);
    printf("\t------------\n");
    printf("\t %c | %c | %c | \n", matrizCasas[1][0], matrizCasas[1][1], matrizCasas[1][2]);
    printf("\t------------\n");
    printf("\t %c | %c | %c | \n", matrizCasas[2][0], matrizCasas[2][1], matrizCasas[2][2]);


}
int main() {

    int linha = 0, coluna = 0, vez = 0;
    char matrizCasas[3][3];
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            printf("|__|");

        } printf("\n");

    }
    printf("Jogador 1\n");
    printf("Digite a linha: ");
    scanf("%d", &linha);
    printf("Digite a coluna: ");
    scanf("%d", &coluna);
    vez++;

    if (linha < 1 || coluna < 1 || linha > 3 || coluna > 3) {

        linha  = 0;
        coluna = 0;
        printf("Jogada errada.\n");

    } else if (matrizCasas[linha - 1][coluna - 1] == ' ') {

        linha  = 0;
        coluna = 0;
        printf("Jogada errada.\n");

    } else {

        if (vez % 2 == 0) {

            matrizCasas[linha - 1][coluna - 1] == "X";
            casasTabuleiro(matrizCasas[linha - 1][coluna - 1] == "X");

        } else {

            matrizCasas[linha - 1][coluna - 1] == "O";
            casasTabuleiro(matrizCasas[linha - 1][coluna - 1] == "O");

        }

    }


    return 0;

}