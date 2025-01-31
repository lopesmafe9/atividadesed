/*Codifique a função strupr(s) , que converte a string s em maiúscula. Por exemplo, se x armazena "Teste", após a chamada strupr(x) , x estará armazenando "TESTE".*/

#include <stdio.h>
#include <string.h>

char strupr(char *s);
int main(){
    char s[20];

    printf("Digite uma palavra: ");
    gets(s);

    strupr(s);
    
}
char strupr(char *s){
    strupr(s);
    puts(s);
}
