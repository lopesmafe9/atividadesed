/*O quadrado de um número natural n é dado pela soma dos n primeiros números ímpares consecutivos. Por exemplo, 1^2 =1, 2^2 = 1+3 etc. Dado um número n, calcule seu quadrado usando a soma de ímpares ao invés de produto.*/

#include <stdio.h>

int main(){
    int num, i;
    long int termo, termo_ant, aux;
    termo = 1;
    aux=0;
    printf("entre com a posicao: ");
    scanf("%d",&num);

    for(i=0;i<num;i++){
        termo_ant = termo;
        termo = termo + aux;
        aux = termo_ant;
        printf("%d => %ld\n", (i+1), termo);
    }
}
