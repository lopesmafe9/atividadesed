/*Dados os coeficientes (a, b e c) de uma equação de 2º grau, calcule e informe suas raízes reais, usando a fórmula de Báskara.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;

    printf("Informe os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    float delta = pow(b, 2) - (4 * a * c);

    if (delta >= 0)
    {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);

        printf("\nX1= %.2f", x1);
        printf("\nX2= %.2f", x2);
    }
    else
    {
        printf("\nA equacao nao possui raizes reais!");
    }
}
