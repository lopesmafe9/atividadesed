--Seja e uma variável contendo o número de erros detectados num certo processo. Codifique uma instrução capaz de exibir saída como: 1 erro detectado, 5 erros detectados.--

#include <stdio.h>

int main(){
    int e;

    printf("Coloque o numero de erros: ");
    scanf("%d", &e);

    if (e == 1) {
        printf("1 erro detectado.\n");
    } else {
        printf("%d erros detectados.\n", e);
    }
}
