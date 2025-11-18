/*Faça um programa para ler um número inteiro, positivo de três dígitos, e gerar outro número formado 
pelos dígitos invertidos do número lido. (Ex: Numero Lido = 123; Numero Gerado = 321) 
Em seguida informar: NÚMERO GERADO MAIOR QUE NÚMERO LIDO ou NÚMERO LIDO MAIOR QUE NÚMERO GERADO, 
ou ainda, NÚMERO GERADO IGUAL AO NÚMERO LIDO.
*/

#include <stdio.h>
#include <stdlib.h>

int inverter(int n) {
    int centena = n / 100;
    int dezena = (n / 10) % 10;
    int unidade = n % 10;

    return unidade * 100 + dezena * 10 + centena;
}

int main() {
    int n, unidade, dezena, centena;

    while (1) {
        printf("\nDigite um número de 3 dígitos: "); scanf("%i", &n);
        if (abs(n) < 100 || abs(n) > 999) {
            printf("Entrada inválida! Tente novamente.\n");
            continue;
        }
        break;
    }

    int inv = inverter(n);
    
    printf("\nNúmero gerado: %i\n", inv);
    if (inv > n)
        printf("O número gerado é maior que número lido.\n\n");
    else if (inv == n)
        printf("O número gerado é igual ao número lido.\n\n");
    else
        printf("O número gerado é menor que número lido.\n\n");
    return 0;
}