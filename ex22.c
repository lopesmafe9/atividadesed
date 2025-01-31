/*Defina um tipo de estrutura para armazenar um horário composto de hora, minutos e segundos. Crie e inicialize uma variável desse tipo e, em seguida, mostre seu valor no vídeo usando o formato "99:99:99"*/

#include <stdio.h>

struct horario{
        int hora;
        int minuto;
        int segundo;
    };

int main(){

    struct horario atual = {13, 58, 30};

    printf("%02d:%02d:%02d\n", atual.hora, atual.minuto, atual.segundo);

}


