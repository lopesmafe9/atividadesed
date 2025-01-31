--A série de Fibonacci é 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, … Os dois primeiros termos são iguais a 1, e a partir do terceiro, o termo é dado pela soma dos dois termos anteriores. Dado um número n≥3, exiba o n-ésimo termo da série de Fibonacci. (Não use recursivo.)--
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
