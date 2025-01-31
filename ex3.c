/*Considere que o perfil de uma pessoa pode ser determinado a partir da sua data de nascimento, conforme exemplificado a seguir. Data uma data de nascimento, informe o perfil correspondente.*/
#include <stdio.h>

int main(){

    int dia, mes, ano, s1, s2, s3;
    
    printf("Informe sua data de nascimento: ");
    printf("\nDia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    printf("\n%d/%d/%d", dia, mes, ano);

    s1 = ((dia * 100) + mes) + ano;
    s2 = (s1 / 100) + (s1 % 100);
    s3 = (s2 % 5); 

    switch (s3){
    case 0: printf("\nTimido"); break;
    case 1: printf("\nSonhador");break;
    case 2: printf("\nPaquerador");break;
    case 3: printf("\nAtraente");break;
    case 4: printf("\nIrresistivel");break;
    default:
        break;
    }
}
