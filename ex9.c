/*Codifique a função fat(n), que devolver o fatorial de n.*/

#include <stdio.h>

int fat(int num);

int main(){

    int num, fatorial;

    printf("Informe o numero: ");
    scanf("%d", &num);

    fatorial = fat(num);

    printf("O fatorial do numero %d e %d", num, fatorial);
}

int fat(int num){
    int fatorial = 1;
    int i = 1;
    for(i = 1; i <= num; i++){
        fatorial = fatorial * i;
    }
    return fatorial;
    }
