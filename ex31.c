/*A função sleep() , definida em dos.h , suspende a execução de um programa por um número específico de segundos. Usando essa função, implemente um programa com a sintaxe CRONO <segundos>, que exibe uma contagem regressiva dos segundos e, ao final, toca uma campainha.*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Uso: %s <segundos>\n", argv[0]);
        return 1;
    }

    int segundos = atoi(argv[1]);

    for (int i = segundos; i > 0; i--)
    {
        printf("%d\n", i);
        Sleep(1000);
    }

    printf("Campainha!\n");

    return 0;
}
