/*Usando ponteiros, codifique a função puts(s) , que exibe uma string s no vídeo e, depois, muda o cursor de linha.*/

#include <stdio.h>

void putstring(char *s);

int main()
{
    char frase[100];

    printf("Informe a frase: ");
    fgets(frase, sizeof(frase), stdin);

    putstring(frase);
}
void putstring(char *s)
{
    while (*s != '\0')
    {
        putchar(*s);
        s++;
    }
    printf("\n");
}
