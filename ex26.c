/*Codifique um programa para criar a configuração representada na figura abaixo e exibir a letra 'A' a partir de cada uma das variáveis.*/

#include <stdio.h>

int main()
{

    char t = 'A';
    char *s = &t;
    char **r = &s;
    char ***q = &r;
    char ****p = &q;

    printf("&t = %p e t = %c\n", &t, t);
    printf("&*s = %p e *s = %c\n", &*s, *s);
    printf("&**r = %p e **r = %c\n", &**r, **r);
    printf("&***q = %p e ***q = %c\n", &***q, ***q);
    printf("&***p = %p e ***p = %c\n", &***p, ****p);
}
