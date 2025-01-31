/*Além da adição de ponteiros com inteiros, uma outra opera\ção possível é a subtração entre ponteiros do mesmo tipo. Quando um ponteiro é subtraído de outro, o resultado é o número de elementos existentes no espaço de memória compreendido entre os endereços apontados por eles. Usando essa idéia, codifique a função strlen(s ), que devolve o número de caracteres existentes numa string s .*/

#include <stdio.h>

int strlen(char *s);

int main()
{
    char s[100];

    printf("Informe a frase: ");
    fgets(s, sizeof(s), stdin);

    printf("O comprimento da string e: %d\n", strlen(s) - 1);
}
int strlen(char *s)
{
    char *p = s;
    while (*p)
    {
        p++;
    }
    return p - s;
}
