#include <stdio.h>

#define KmParaMilhas      0.621371
#define KgParaLibras      2.20462
#define MetrosParaPes     3.28084

void conversor() {
    int opcao;
    float unidade;
    
    while (1) {    
        printf("Selecione uma opção abaixo:\n\n");
        printf("1) Converter quilômetros para milhas\n2) Converter milhas para quilômetros\n");
        printf("3) Converter quilogramas para libras\n4) Converter metros para pés\n0) Sair\n\n");
        printf("Seleção: ");
        if (scanf("%i", &opcao) != 1) {
            printf("Entrada inválida. Digite um número.\n\n");
            while (getchar () != '\n');
            continue;
        }
        switch (opcao) {
        case 1:
            printf("Digite a distância em km a ser convertida: ");
            scanf("%f",&unidade);
            printf("%.4f km é equivalente a %.2f milhas\n", unidade, unidade*KmParaMilhas);
            break;
        case 2:
            printf("Digite a distância em milhas a ser convertida: ");
            scanf("%f",&unidade);
            printf("%.4f milhas é equivalente a %.2f km\n", unidade, unidade/KmParaMilhas);
            break;
        case 3:
            printf("Digite a massa em kg a ser convertida: ");
            scanf("%f",&unidade);
            printf("%.4f kg é equivalente a %.2f libras\n", unidade, unidade*KgParaLibras);
            break;
        case 4:
            printf("Digite a distância em metros a ser convertida: ");
            scanf("%f",&unidade);
            printf("%.4f m é equivalente a %.2f pés\n", unidade, unidade*MetrosParaPes);
            break;
        case 0:
            printf("Saindo..\n");
            return;
        default: 
            printf("Seleção inválida. Tente novamente.\n");
            break;
        }
    }

}

int main() {
    conversor();
    return 0;
}