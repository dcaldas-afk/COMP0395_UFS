/* Escrever programa para ler o valor de um salário e atribuir aumento de 50% 
caso este seja ingual ou inferior a R$ 850,00.*/

#include <stdio.h>

int main() {
    float salario;
    
    printf("Quanto é o seu salário?\nReposta: "); scanf("%f", &salario);
    if (salario <= 850)
        printf("Novo salário: R$%.2f\n", salario*1.5);
    else
        printf("Salário não alterado.\n");
    return 0;
}