/*Numa certa agência bancária, as contas são identificadas por números de até seis dígitos seguidos de um dígito verificador, calculado conforme exemplificado a seguir. Dado um número de conta n, exiba o número de conta completo correspondente. Seja n = 7314 o número da conta. Adicionamos os dígitos de n e obtemos a soma s = 4+1+3+7 = 15; Calculamos o resto da divisão de s por 10 e obtemos o dígito d = 5. Número de conta completo: 007314−5*/

#include <stdio.h>

int main(){
    int a, b, c, d, soma, resto;

    printf("Informe o primeiro digito: ");
    scanf("%d", &a);
    printf("Informe o segundo digito: ");
    scanf("%d", &b);
    printf("Informe o terceiro digito: ");
    scanf("%d", &c);
    printf("Informe o quarto digito: ");
    scanf("%d", &d);

    soma = a + b + c + d;
    resto = soma % 10;

    printf("Numero da conta: 00%d%d%d%d-%d", a, b, c, d, resto);


}
