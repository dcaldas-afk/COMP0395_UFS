/*Faça um programa para verificar se determinado número inteiro lido N é divisível por A ou B, mas não simultaneamente pelos dois valores dados. 
São A e B, bem como N, dados pelo usuário. 
Atendendo à condição estabelecida, emitir mensagem ‘ATENDE CONDIÇÃO’; caso contrário, exibir: ‘NÃO ATENDE CONDIÇÃO’.*/


#include <stdio.h>

int main() {
    int A, B, N;

    printf("\nDigite o valor de A: "); scanf("%d", &A);
    printf("Digite o valor de B: "); scanf("%d", &B);
    printf("Digite o valor de N: "); scanf("%d", &N);
    
    int divA = (N % A == 0); int divB = (N % B == 0);
    
    if (divA && divB)
        printf("\nNÃO ATENDE CONDIÇÃO\n\n");
    else
        printf("\nATENDE CONDICAO\n\n");
    return 0;
}