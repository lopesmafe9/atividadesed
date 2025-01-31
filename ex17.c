/*Codifique a função strpos(s,c), que devolve a posição da primeira ocorrência do caractere c na string s; ou −1, caso ele não ocorra em s.*/

#include <stdio.h>

int strpos(char *s, char c);
int main(){
    char s[20];
    char c;

    printf("Digite uma frase: ");
    gets(s);

    printf("Informe o que deseja buscar: ");
    scanf("%c", &c);

    int pos = strpos(s, c);
    
    if (pos != -1){
        printf("'%c' foi encontrado no caractere %do", c, pos + 1);
    }else{
        printf("'%c' nao foi encontrado!", c);
    }
    

}
int strpos(char *s, char c){
    int i;
    for (i = 0; s[i] != '\0'; i++){
        if (s[i] == c){
            return i;
        }
    }
    return -1;
}
