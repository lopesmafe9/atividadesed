/*Faça uma função recursiva para retornar o fatorial de um número n.*/

#include <stdio.h>

int fat(int num);

int main(){

    int num, fatorial;

    printf("Informe o numero: ");
    scanf("%d", &num);

    fatorial = fat(num);

    printf("O fatorial do numero %d e %d", num, fatorial);

    
}
int fat( int num){
    if(num == 0 || num == 1){//0 pq não pode fatorial com 0 e 1 pq fatorial de 1 é 1
        return num;
    }else{
        return num * fat(num -1);
    }
}
