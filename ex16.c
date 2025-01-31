/*Codifique a função strcat(s,t) , que concatena a string t ao final da string s. Por exemplo, se x armazena "facil" e y armazena "idade", após a chamada strcat(x,y), x estará armazenando "facilidade"*/

#include <stdio.h>
#include <string.h>

char* strcat(char *s, char *t);

int main(){
    char s[40];
    char t[20];

    printf("Digite a primeira parte da frase: ");
    gets(s);

    printf("Digite a segunda parte da frase: ");
    gets(t);

    strcat(s, t);

}
char* strcat(char *s, char *t){

    strcat(s, t);
    puts(s);
    
}
