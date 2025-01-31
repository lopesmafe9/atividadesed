/*Codifique a função strdel(s,p) , que remove o caractere existente na posição p da string s. Se a posição p não existe em s, nada é feito.*/

#include <stdio.h>

int strdel(char *s, int p);

int main(){
    char s[20];
    int p;

    printf("Informe a frase: ");
    gets(s);

    printf("Qual posicao deseja apagar: ");
    scanf("%d", &p);

    int resultado = strdel(s, p);

    if (resultado == 1){
        printf("Nova frase: %s", s);
    }else{
        printf("Essa nao e uma posicao valida na string!");
    }
    


}
int strdel(char *s, int p){
    int i;
    if (s[p] == '\0'){
        return 0;
    }
    for (i = p; s[i] != '\0'; i++){
        s[i] = s[i + 1];
    }
    return 1;

}
