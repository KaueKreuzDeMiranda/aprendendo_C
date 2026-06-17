#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    float altura;

    printf("Digite o nome do aluno: ");
    scanf("%s", &nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("\n=== DADOS DO ALUNO ===");
    printf("\nNome: %s", nome);
    printf("\nIdade: %d anos", idade);
    printf("\nAltura: %.2f metros", altura);

    return 0;
}