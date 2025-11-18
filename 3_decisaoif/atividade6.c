/*“Numa loja web os valores dos fretes são calculados em conformidade com os totais das compras. 
Se valor da compra é até R$300,00 (inclusive), o frete corresponde a 35% desta; para valores maiores, 
o frete é de 20% do valor desta. Escrever programa para ler valor da compra e exibir valor final, com frete.
*/

#include <stdio.h>

int main() {
    float valorCompra, frete;

    printf("Qual o valor da sua compra?\nResposta: "); scanf("%f", &valorCompra);
    
    frete = valorCompra*0.2;
    
    if (valorCompra <= 300)
        frete = valorCompra*0.35;
    printf("\nValor original: R$%.2f\nFrete: R$%.2f\nTotal: R$%.2f\n\n", valorCompra, frete, valorCompra + frete);
    return 0;
}