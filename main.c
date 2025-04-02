#include <stdio.h>

int main() {

    struct Players{

        int linhaJogada;
        int colunaJogada;
        int numerodaJogada;
        int matrizJogo[3][3];

    } typedef Players;

    Players player1;
    Players player2;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            
            printf("|__|");

        } printf("\n");
    
    }

    printf("Bem vindo ao jogo da velha!\n");
    printf("Me dê sua primeira jogada:\n");
    scanf("%d", &player1.linhaJogada);
    scanf("%d", &player1.colunaJogada);
    
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
                
            printf("%d", player1.matrizJogo[]);
    
        } printf("\n");
        
    }

    return 0;

}