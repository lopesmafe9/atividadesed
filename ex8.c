/*Faça um aplicativo que verifique se o número digitado n é um número primo. Lembrando que todo número primeiro é divisível apenas por 1 ou por ele mesmo.*/

#include <stdio.h>

int main(){
    int n, i, aux;
    aux = 0;
    printf("Informe o numero: ");
    scanf("%d", &n);

    for(i = 2; i <= n / 2; ++i){
        if(n % i == 0){
            aux = 1;
            break;
        }
    }
    
    if(n == 1 ){
        printf("1 não é primo");
    }else{
        if(aux == 0){
            printf("O numero %d e primo!", n);
        }else{
            printf("O numero %d nao e primo!", n);
        }
    }


}
