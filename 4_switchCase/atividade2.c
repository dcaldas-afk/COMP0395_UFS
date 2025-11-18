#include <stdio.h>

#define KmParaMilhas      0.621371
#define KgParaLibras      2.20462
#define MetrosParaPes     3.28084

int menu() {
    int opcao;

    printf("Selecione uma opção abaixo:\n\n");
    printf("1) Converter quilômetros para milhas\n2) Converter milhas para quilômetros\n");
    printf("3) Converter quilogramas para libras\n4) Converter metros para pés\n0) Sair\n\n");
    printf("Seleção: ");
    if (scanf("%i", &opcao) != 1) {
        printf("Entrada inválida. Digite um número.\n\n");
        while (getchar () != '\n');
        return -1;
    }
    return opcao;
}

void kmParaMilha() {
    float unidade;

    printf("Digite a distância em km a ser convertida: "); scanf("%f",&unidade);
    printf("%.4f km é equivalente a %.2f milhas\n", unidade, unidade*KmParaMilhas);
}

void milhaParaKm() {
    float unidade;

    printf("Digite a distância em milhas a ser convertida: "); scanf("%f",&unidade);
    printf("%.4f milhas é equivalente a %.2f km\n", unidade, unidade/KmParaMilhas);
}

void kgParaLibra() {
    float unidade;

    printf("Digite a massa em kg a ser convertida: "); scanf("%f",&unidade);
    printf("%.4f kg é equivalente a %.2f libras\n", unidade, unidade*KgParaLibras);
}

void metroParaPe() {
    float unidade;

    printf("Digite a distância em metros a ser convertida: "); scanf("%f",&unidade);
    printf("%.4f m é equivalente a %.2f pés\n", unidade, unidade*MetrosParaPes);
}

void conversor() {
    while (1) {    
        int opcao = menu();
        
        switch (opcao) {
        case -1: continue;
        case 0: printf("Saindo..\n"); return;
        case 1: kmParaMilha(); break;
        case 2: milhaParaKm(); break;
        case 3: kgParaLibra(); break;
        case 4: metroParaPe(); break;
        default: printf("Seleção inválida. Tente novamente.\n"); break;
        }
    }
}

int main() {
    conversor();
    return 0;
}