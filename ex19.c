/*Codifique a função strins(s,c,p) , que insere o caractere s na posição p da string s. Se a posição p não existe em s, o caractere deve ser inserido no final da string.*/

#include <stdio.h>
#include <string.h>

//declarando as funções
void strins(char *s, char c, int p);

int main() {
    char str[100]; 
    char ch[2];
    int pos;
    
    printf("Digite a string original: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0; 
    printf("Digite o caractere a ser inserido: ");
    fgets(ch, 2, stdin); 
    printf("Digite a posicao para inserir o caractere: ");
    scanf("%d", &pos);
    strins(str, ch[0], pos);
    printf("Frase nova: %s\n", str);
}
//funções
void strins(char *s, char c, int p){
    int len = strlen(s);

    if (p > len) {
        p = len;
    }
    for (int i = len; i >= p; i--) {
        s[i + 1] = s[i];
    }
    s[p] = c;
}
