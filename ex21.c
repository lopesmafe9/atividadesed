/*Crie um programa que inicializa e exibe uma matriz representando um tabuleiro para o "jogo da velha”.*/

#include <stdio.h>

int main(){
    int i, j;
    char tabuleiro[3][3] = {
        {'|', '|','|'},
        {'|', '|', '|'},
        {'|', '|', '|'}
    };

    printf("Tabuleiro inicial: \n");
    for (i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++){
            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    
}
