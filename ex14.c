/*Codifique a função strlen(s), que devolve o número de caracteres armazenados na string s. Lembre-se de que o terminador '\0' não faz parte da string e, portanto, não deve
ser contado.*/

#include <stdio.h>
#include <string.h>

int strlen(char *s);
int main(){
    char s[20];

    printf("Digite uma palavra: ");
    gets(s);

    int tam = strlen(s);

    printf("O tamanho da string e: %d", tam);
}
int strlen(char *s){
    int tam = strlen(s);
}
