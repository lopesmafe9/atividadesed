/*Suponha que você precise de uma variável para armazenar n strings lidas do teclado. É melhor declará-la como uma matriz de caracteres ou como um vetor de ponteiros? Justifique sua resposta.*/

#include <stdio.h>

#define MAX_STRINGS 5

int main()
{
    char strings[MAX_STRINGS][100];

    for (int i = 0; i < MAX_STRINGS; i++)
    {
        printf("Informe a string %d: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin);
    }
    printf("\nStrings armazenadas:\n");
    for (int i = 0; i < MAX_STRINGS; i++)
    {
        printf("%d: %s", i + 1, strings[i]);
    }
}
