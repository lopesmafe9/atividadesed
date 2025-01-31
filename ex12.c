/*Codifique um programa para solicitar 5 números, via teclado, e exibi-los na ordem inversa àquela em que foram fornecidos.*/

#include <stdio.h>

int main(){
    int num[5], i;

    for (i = 0; i < 5; i++){
        printf("Digite o numero: ");
        scanf("%d", &num[i]);
    }
    
    printf("Os numeros na ordem inversa: ");
    for (i = 4; i >= 0; i--){
        printf("%d ", num[i]);
    }
}
