/*Escrever programa para ler peso (massa) e altura de uma pessoa, calcular o índice de massa corporal:
IMC = massa / (altura · altura)
e determinar o tipo de obesidade da pessoa, conforme tabela dada:*/

#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("\nDigite o peso em Kg: ");       scanf("%f", &peso);
    printf("Digite a altura em metros: "); scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nIMC = %.2f\n", imc);
    if (imc < 18.5)
        printf("Classificacao: Magreza\n\n");
    else if (imc < 25.0)
        printf("Classificacao: Saudavel\n\n");
    else if (imc < 30.0)
        printf("Classificacao: Sobrepeso\n\n");
    else if (imc < 35.0)
        printf("Classificacao: Obesidade Grau I\n\n");
    else if (imc < 40.0)
        printf("Classificacao: Obesidade Grau II (severa)\n\n");
    else
        printf("Classificação: Obesidade Grau III (morbida)\n\n");
    return 0;
}
