#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void exibirTabuleiro(char matrizcasas[LINHAS][COLUNAS]) {

    for (int i = 0; i < LINHAS; i++) {

        for (int j = 0; j < COLUNAS; j++) {

            if (matrizcasas[i][j] == 'X' || matrizcasas[i][j] == 'O') {

                printf("| %c |", matrizcasas[i][j]);

            } else {

                printf("| %d |", matrizcasas[i][j]);
            }

        } printf("\n");

    } 

}


int jogadaTabuleiro(char jogador, char matrizcasas[3][3], int posicaoEscolha) {

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
    
            if (matrizcasas[i][j] == posicaoEscolha) {
                
                matrizcasas[i][j] = jogador;
                return 1;
                
            }
        
        }
    
    }

    return 0;

}


void testeGanhador(char matrizcasas[3][3], int vez) {

    while (vez <= 9) {

        if (matrizcasas[0][0] == 'X' && matrizcasas[0][1] == 'X' && matrizcasas[0][2] == 'X' || matrizcasas[1][0] == 'X' && matrizcasas[1][1] == 'X' && matrizcasas[1][2] == 'X' || matrizcasas[2][0] == 'X' && matrizcasas[2][1] == 'X' && matrizcasas[2][2] == 'X') {

            printf("Vitória do Jogador X.\n");
            break;
    
        } else if (matrizcasas[0][0] == 'O' && matrizcasas[0][1] == 'O' && matrizcasas[0][2] == 'O' || matrizcasas[1][0] == 'O' && matrizcasas[1][1] == 'O' && matrizcasas[1][2] == 'O' || matrizcasas[2][0] == 'O' && matrizcasas[2][1] == 'O' && matrizcasas[2][2] == 'O') {
    
            printf("Vitória do Jogador O.\n");
            break;

        } else if (matrizcasas[0][0] == 'X' && matrizcasas[1][0] == 'X' && matrizcasas[2][0] == 'X' || matrizcasas[0][1] == 'X' && matrizcasas[1][1] == 'X' && matrizcasas[2][1] == 'X' || matrizcasas[0][2] == 'X' && matrizcasas[1][2] == 'X' && matrizcasas[2][2] == 'X') {

            printf("Vitória do Jogador X.\n");
            break;

        } else if (matrizcasas[0][0] == 'O' && matrizcasas[1][0] == 'O' && matrizcasas[2][0] == 'O' || matrizcasas[0][1] == 'O' && matrizcasas[1][1] == 'O' && matrizcasas[2][1] == 'O' || matrizcasas[0][2] == 'O' && matrizcasas[1][2] 'O' && == matrizcasas[2][2] == 'O') {

            printf("Vitória do Jogador O.\n");
            break;

        } else if (matrizcasas[0][0] == 'X' && matrizcasas[1][1] == 'X' && matrizcasas[2][2] == 'X' || matrizcasas[0][2] == 'X' && matrizcasas[1][1] == 'X' && matrizcasas[2][0] == 'X') {

            printf("Vitória do Jogador X.\n");
            break;

        } else if (matrizcasas[0][0] == 'O' && matrizcasas[1][1] == 'O' && matrizcasas[2][2] == 'O' || matrizcasas[0][2] == 'O' && matrizcasas[1][1] == 'O' && matrizcasas[2][0] == 'O') {

            printf("Vitória do Jogador O.\n");
            break;
        
        } 

    }

}


int main() {

    int vez = 0, escolha;
    char jogadorAtual;
    char matrizCasas[LINHAS][COLUNAS] = {
        {'0', '1', '2'}, 
        {'3', '4', '5'}, 
        {'6', '7', '8'}
    };

    while (vez <= 9) {

        jogadorAtual = (vez % 2 == 0) ? 'X' : 'O';

        exibirTabuleiro(matrizCasas);

        printf("Jogador %c, digite a escolha: ", jogadorAtual);
        scanf("%d", &escolha);

        if (escolha < 0 || escolha >= 9) {

            printf("Posicao Invalida!\n");
            continue;

        } else if (!jogadaTabuleiro(jogadorAtual, matrizCasas, escolha + '0')) {

            printf("Posicao Ocupada!\n");
            continue;

        } 

        testeGanhador(matrizCasas, vez);
        vez++;

    }

    exibirTabuleiro(matrizCasas);

    return 0;

}