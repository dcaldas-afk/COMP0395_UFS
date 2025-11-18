/*“Escrever programa para ler as três notas de um aluno, calcular a 
média deste (média ponderada: primeira nota com peso 1, segunda nota com peso 2 e terceira nota com peso 3) 
e determinar a situação do aluno: APROVADO – se média igual ou superior a 7; EM RECUPERAÇÃO – 
se não aprovado e com média igual ou superior a 5; REPROVADO – quando média inferior a 5.
*/

#include <stdio.h>

int main() {
    float n1,n2,n3,media;

    printf("Informe a nota 1 do aluno: "); scanf("%f", &n1);
    printf("Informe a nota 2 do aluno: "); scanf("%f", &n2);
    printf("Informe a nota 3 do aluno: "); scanf("%f", &n3);
    
    media = (n1*1 + n2*2 + n3*3)/6;
    
    printf("\nMédia ponderada: %.2f\n", media);
    printf("Resultado: ");
    if (media >= 7)
        printf("Aprovado\n\n");
    else if (media >= 5 && media < 7)
        printf("Em recuperação\n\n");
    else
        printf("Reprovado\n\n");
    return 0;
}