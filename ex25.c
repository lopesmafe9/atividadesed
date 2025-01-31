/*Codifique a função minimax(v,n,a,b) , que recebe um vetor v contendo n números reais e devolve em a e b, respectivamente, os valores mínimo e máximo entre aqueles armazenados em v.*/

#include <stdio.h>

void minimax(int v[], int n, float *a, float *b);

int main()
{
    int tamanho;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    printf("Informe os %d valores do vetor: \n", tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    float minimo, maximo;
    minimax(vetor, tamanho, &minimo, &maximo);

    printf("Mínimo: %.2f\n", minimo);
    printf("Máximo: %.2f\n", maximo);
}
void minimax(int v[], int n, float *a, float *b)
{
    *a = v[0];
    *b = v[0];

    for (int i = 0; i < n; i++)
    {
        if (v[i] < *a)
        {
            *a = v[i];
        }
        if (v[i] > *b)
        {
            *b = v[i];
        }
    }
}
