/*Usando atof() − ASCII to float − implemente um programa com a sintaxe CALC <valor> <operador> <valor>, que receba uma expressão aritmética simples, calcula e exiba seu valor.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Uso: %s <valor> <operador> <valor>\n", argv[0]);
        return 1;
    }

    float num1 = atof(argv[1]);
    char operador = argv[2][0];
    float num2 = atof(argv[3]);

    float resultado;
    switch (operador)
    {
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Erro: divisão por zero.\n");
            return 1;
        }
        resultado = num1 / num2;
        break;
    default:
        printf("Operador inválido.\n");
        return 1;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
