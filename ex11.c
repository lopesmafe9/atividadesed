/*Resolva o problema Sequência de Fibonacci com função recursiva.*/

#include <stdio.h>
int fib (int num);
int main(){
    int num, i;

    printf("Entre com um numero: ");
    scanf("%d", &num);

    printf("%d => %d\n", 1, fib(i));

    for(i=1; i<num; i++){
        printf("%d => %d\n",(i+1), fib(i));
    }

}

int fib (int n){
    if(n<=1){
        return 1;
    }else{
        return fib(n-1)+ fib(n-2);
    }
}
