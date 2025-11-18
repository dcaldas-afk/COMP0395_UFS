
/*Os colegas do filho de Sr. Zé estão sentindo dificuldade para alugar um ônibus para levá-los
ao "Museu da gente Sergipana". Então Sr. Zé resolveu disponibilizar sua kombi, mas a depender do número de inscritos,
serão necessárias muitas viagens, e alguns passageiros deverão ir de coletivo.
Considerando que a kombi tem capacidade para transportar 11 pessoas (fora o motorista - Sr. Zé), escrever um programa
em C, para, dado o número de viagens que devem ser necessárias e o número de passagens de coletivo.
Exemplos: se 22 pessoas - 2 viagens de kombi e 0 passagem em coletivo; se 37 pessoas - 3 viagens e 4 passagens em coletivo.
Vale esclarecer que se o número de passageiros for inferior a 11, sr. Zé os levará de kombi*/

#include <stdio.h>

#define CAPACIDADE 11

int main() {
    int pessoas, viagens, coletivo;

    printf("\nDigite o número total de pessoas: ");
    scanf("%d", &pessoas);
    if (pessoas <= CAPACIDADE) {
        viagens = 1;
        coletivo = 0;
    } 
    else {
        viagens = pessoas / CAPACIDADE;
        coletivo = (viagens * CAPACIDADE) - pessoas;
        coletivo = coletivo < 0 ? -coletivo : 0;
    }
    printf("\nViagens de kombi: %d\n", viagens);
    printf("Passagens de coletivo: %d\n\n", coletivo);
    return 0;
}
