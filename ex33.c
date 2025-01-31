/*Codifique a função strchr(s,c) que devolve o endereço da primeira ocorrência do caracter c na string s ou, então, o valor NULL caso esse caracter não seja encontrado.*/

#include <stdio.h>

char *strchr(const char *s, char c);

int main()
{
    const char *s = "Hello, world!";
    char c = 'o';

    char *result = strchr(s, c);
    if (result != NULL)
    {
        printf("O caracter '%c' foi encontrado na posição %ld da string.\n", c, result - s);
    }
    else
    {
        printf("O caracter '%c' não foi encontrado na string.\n", c);
    }

    return 0;
}

char *strchr(const char *s, char c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return (char *)s;
        }
        s++;
    }
    return NULL;
}
