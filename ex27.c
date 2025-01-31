/*Usando ponteiros, codifique a função carrega(v,n), que preenche um vetor v com n valores lidos do teclado.*/

#include <stdio.h>

void carrega(int v[], int *n)
{
    static int index = 0;
    v[index] = *n;
    index++;
}

int main()
{
    int vetor[5];
    int num;

    for (int i = 0; i < 5; i++)
    {
        printf("\nInforme um valor: ");
        scanf("%d", &num);

        carrega(vetor, &num);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vetor[i]);
    }
}
