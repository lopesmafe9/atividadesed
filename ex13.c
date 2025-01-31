/*Codifique a função histograma(t) , que exibe um histograma da variação da temperatura durante a semana. Por exemplo, se as temperaturas em t forem 19, 21, 25, 22, 20, 17 e 15°C, a função deverá exibir:*/

#include <stdio.h>
#define SEMANA 7

//declarando as funções
void linhas(int temp);
void histograma(int t[], int tamanho);

int main() {
    int temperaturas[SEMANA] = {19, 21, 25, 22, 20, 17, 15};

    printf("Histograma da variaaoo da temperatura durante a semana:\n");
    histograma(temperaturas, SEMANA);
}
//funções
void linhas(int temp){
    for (int i = 0; i < temp; i++){
        printf("-");
    }
    printf(" %dC\n", temp);
}
void histograma(int t[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        linhas(t[i]);
    }
    
}
