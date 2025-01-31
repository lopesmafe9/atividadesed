/*Usando o tipo PESSOA, definido no exemplo 6.6, crie uma função para preencher uma agenda com os dados de 5 pessoas. Crie também uma função que para procurar na agenda o telefone de uma determinada pessoa e codifique um programa para testar essas funções.*/

#include <stdio.h>
#include <string.h>
#define TAM 5

//estruturas
typedef struct {
    int dia;
    int mes;
    int ano;
} DATA;
typedef struct {
    char nome[31];
    char fone[20];
    DATA nasc;
} PESSOA;

//chamando as funções 
void preencher(PESSOA agenda[]);
void procurarTelefone(PESSOA agenda[], const char* nome);

int main(){
    PESSOA agenda[TAM];
    preencher(agenda);
    char nomeProcura[31];


    printf("\nDigite o nome da pessoa para buscar seu telefone: ");
    scanf(" %[^\n]", nomeProcura);
    procurarTelefone(agenda, nomeProcura);

    
}
//funções
void preencher(PESSOA agenda[]) {
    for (int i = 0; i < TAM; i++) {
        printf("Dados da pessoa %d: \n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", agenda[i].nome);
        printf("Telefone: ");
        scanf("%s", agenda[i].fone);
        printf("Data de nascimento (DD MM AAAA): ");
        scanf("%d %d %d", &agenda[i].nasc.dia, &agenda[i].nasc.mes, &agenda[i].nasc.ano);
    }
}
void procurarTelefone(PESSOA agenda[], const char* nome) {
    for (int i = 0; i < TAM; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) { 
            printf("Telefone de %s: %s\n", nome, agenda[i].fone);
            return; 
        }
    }
    printf("Pessoa nao encontrada.\n");
}
