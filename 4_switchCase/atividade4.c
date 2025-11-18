#include <stdio.h>

#define ESTUDANTES 4

int menu() {
    int opcao;
    printf("Selecione uma opção:\n\n");
    printf("1) Divisão igual simples\n2) Divisão proporcional ao consumo\n");
    printf("3) Rateio com pesos diferentes\n0) Fechar programa\n\n");
    printf("Seleção: ");
    if (scanf("%i", &opcao) != 1) {
        printf("Entrada inválida. Digite um número.\n\n");
        while (getchar () != '\n');
        return -1;
    }
    return opcao;
}

float divIgual(float conta) {
    printf("Qual o valor da conta de energia?\nResposta: ");
    scanf("%f", &conta);
    if (conta < 0) 
        return -1;
    float div = conta / ESTUDANTES;
    printf("Cada estudante pagará R$ %.2f\n\n", div);
    return div;
}

float divProporcional(float conta) {
    float n1, n2, n3, n4;
    printf("Qual o valor da conta de energia?\nResposta: ");
    scanf("%f", &conta);
    if (conta < 0) {
        printf("O valor da conta não pode ser negativo!\n\n");
        return -1;
    }
    printf("Digite a seguir a porcentagem de consumo de cada estudante\n");
    printf("Estudante 1: ");
    scanf("%f", &n1);
    printf("Estudante 2: ");
    scanf("%f", &n2);
    printf("Estudante 3: ");
    scanf("%f", &n3);
    printf("Estudante 4: ");
    scanf("%f", &n4);
    if (n1 < 0 || n2 < 0 || n3 < 0 || n4 < 0) {
        printf("O consumo não pode ser negativo.\n");
        return -1;
    }
    float soma = n1+n2+n3+n4;
    if (soma != 100) {
        printf("A soma das porcentagens precisa ser 100%%.\n");
        return -1;
    }
    printf("\nO estudante 1 pagará R$ %.2f\n", conta*(n1/100));
    printf("O estudante 2 pagará R$ %.2f\n", conta*(n2/100));
    printf("O estudante 3 pagará R$ %.2f\n", conta*(n3/100));
    printf("O estudante 4 pagará R$ %.2f\n\n", conta*(n4/100));
    return soma;
}

int rateio(float conta) {
    int p1, p2, p3, p4;
    printf("Qual o valor da conta de energia?\nResposta: ");
    scanf("%f", &conta);
    if (conta < 0) {
        printf("O valor da conta não pode ser negativo!\n\n");
        return -1;
    }
    printf("Digite a seguir o peso de consumo de cada estudante para que seja feito o rateio\n");
    printf("Estudante 1: ");
    scanf("%d", &p1);
    printf("Estudante 2: ");
    scanf("%d", &p2);
    printf("Estudante 3: ");
    scanf("%d", &p3);
    printf("Estudante 4: ");
    scanf("%d", &p4);
    if (p1 < 0 || p2 < 0 || p3 < 0 || p4 < 0) {
        printf("O peso não pode ser negativo.\n");
        return -1;
    }
    int soma = p1+p2+p3+p4;
    if (soma <= 0) {
        printf("A soma dos pesos não pode ser negativa ou igual a zero.\n");
        return -1;
    }
    printf("\nO estudante 1 pagará R$ %.2f\n", conta*((float)p1/soma));
    printf("O estudante 2 pagará R$ %.2f\n", conta*((float)p2/soma));
    printf("O estudante 3 pagará R$ %.2f\n", conta*((float)p3/soma));
    printf("O estudante 4 pagará R$ %.2f\n\n", conta*((float)p4/soma));
    return soma;
}

void calculadora() {
    while (1) {
        float conta;
        int opcao = menu();
        switch (opcao) {
            case 0: printf("Saindo..\n"); return;
            case 1: divIgual(conta); break;;
            case 2: divProporcional(conta); break;;
            case 3: rateio(conta); return;
            default: printf("\nSeleção inválida. Tente novamente.\n"); break;
        }
    }
}

int main() {
    calculadora();
    return 0;
}