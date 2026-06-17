#include <stdio.h>

int main() {
    char nome[100];
    char cargo[100];
    float salario;

    printf("Digite o nome do funcionario: ");
    scanf("%s", &nome);

    printf("Digite o cargo: ");
    scanf("%s", &cargo);

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("\n=== DADOS DO FUNCIONARIO ===");
    printf("\nNome: %s", nome);
    printf("\nCargo: %s", cargo);
    printf("\nSalario: R$ %.2f", salario);

    return 0;
}