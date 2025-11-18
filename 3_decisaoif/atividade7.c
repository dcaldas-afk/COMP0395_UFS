/*[Contexto] Nos parques de diversão, alguns brinquedos tem idade e altura mínimas para
que uma pessoa possa usá=los. O parque Ambrolândia possui 3 brinquedos que possuem essa limitação:
a) Barca Viking: 1,5m de altura e 12 anos.
b) Elevator of Death: 1,4m de altura e 14 anos.
c) Final Killer: 1,7m de altura ou 16 anos.

[Objetivo] Dada a altura e a idade de uma pessoa, faça um programa que identifique quantos
brinquedos ele pode andar

[Formato de Entrada] Dois inteiros F e I, representando altura (em cm) e a idade, respectivamente.

[Formato de Saída] O número de brinquedos que ele pode andar no parque, seguido de uma quebra de linha.

[Testes] Dados 130 e 15, o retorno é 0. Dados 173 e 20, o retorno é 3. Dados 170 e 11, o retorno é 1.
Dados 160 e 14, o retorno é 2.*/

#include <stdio.h>

int main() {
    int F, I;
    int brinquedos = 0;

    printf("\nDigite sua altura em cm: "); scanf("%i", &F);
    printf("Digite idade em anos: ");      scanf("%i", &I);

    if (F >= 150 && I >= 12) 
        brinquedos++;
    if (F >= 140 && I >= 14)
        brinquedos++;
    if (F >= 170 || I >= 16)
        brinquedos++;
    printf("\nÉ possível andar em %i brinquedo(s).\n\n", brinquedos);
    return 0;
}
