/*Defina um tipo de estrutura para armazenar os dados de um voo como, por exemplo, os nomes das cidades de origem e destino, datas e horários de partida e chegada. Crie uma variável desse tipo e atribua valores aos seus membros usando a notação de ponto e, depois, inicialização.*/

#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}DATA;
typedef struct{
    char cidade_origem[50];
    char cidade_destino[50];
    DATA data_partida;
    char horario_partida[6];
    DATA data_chegada;
    char horario_chegada[6];
} Voo;

int main(){

    Voo voo_dados = {"Nova York", "Brasilia", {7, 2, 2024}, "18:40", {27, 2, 2024}, "10:00"};
	
    printf("Origem: %s\n", voo_dados.cidade_origem);
    printf("Destino: %s\n", voo_dados.cidade_destino);
    printf("Data de partida: %02d/%02d/%d\n", voo_dados.data_partida.dia, voo_dados.data_partida.mes, voo_dados.data_partida.ano);
    printf("Horario de partida: %s\n", voo_dados.horario_partida);
    printf("Data de chegada: %02d/%02d/%d\n", voo_dados.data_chegada.dia, voo_dados.data_chegada.mes, voo_dados.data_chegada.ano);
    printf("Horario de chegada: %s\n", voo_dados.horario_chegada);

}
