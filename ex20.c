/*Codifique um programa para ler uma matriz quadrada de ordem n e exibir apenas os elementos da diagonal principal.*/

#include <stdio.h>

int main(){
    int i,j, n;

    printf("Informe o tamanho da matriz quadrada: ");
    scanf("%d", &n);

    int matriz[n][n];

    printf("Digite os elementos da matriz de tamanho %dx%d: \n", n, n);
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal: ");
    for (i = 0; i < n; i++){
        printf("%d, ", matriz[i][i]);
    }
}
