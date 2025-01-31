/*Dados um número natural n, exiba seu fatorial n!*/

#include <stdio.h>


int main(){

    int num, i, fatorial;
    fatorial = 1;

    printf("Informe o numero: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        fatorial = fatorial *i;

    }
    printf("O fatorial do numero %d e %d", num, fatorial);

}
