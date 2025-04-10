#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int jogadaTabuleiro(char jogador, int matrizcasas[3][3], int jogadaescolha) {

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
    
            if (jogadaescolha == matrizcasas[i][j]) {
                
                matrizcasas[i][j] = jogador;
                printf("| %c |", jogador);
    
            } else {
                    
                printf("| %d |", matrizcasas[i][j]);
    
            }
    
        } printf("\n");
    
    }

    return 0;

}


union EscolhaJogador {

    int escolhaCasa;

} typedef EscolhaJogador;


int main() {

    int vez = 0;
    char jogador1 = 'X', jogador2 = 'O';
    int matrizCasas[LINHAS][COLUNAS];

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            printf("| %d |", matrizCasas[i][j]);

        } printf("\n");

    }

    EscolhaJogador jogada;

    printf("Jogador 1\n");

    printf("Digite a escolha: ");
    scanf("%d", &jogada.escolhaCasa);
    vez++;

    jogadaTabuleiro(jogador1, matrizCasas, jogada.escolhaCasa);

    /*for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            if (jogada1.escolha == matrizCasas[i][j]) {

                printf("| %c |", jogador1);

            } else {
                
                printf("| %d |", matrizCasas[i][j]);

            }

        } printf("\n");

    }*/

    printf("Jogador 2\n");

    printf("Digite a escolha: ");
    scanf("%d", &jogada.escolhaCasa);
    vez++;

    jogadaTabuleiro(jogador2, matrizCasas, jogada.escolhaCasa);

    return 0;

}