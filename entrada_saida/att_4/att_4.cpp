#include <stdio.h>

int main() {
    char modelo[100];
    int ano;
    float valor;

    printf("Digite o modelo do veiculo: ");
    scanf("%s", &modelo);

    printf("Digite o ano de fabricacao: ");
    scanf("%d", &ano);

    printf("Digite o valor do veiculo: ");
    scanf("%f", &valor);

    printf("\n=== VEICULO CADASTRADO ===");
    printf("\nModelo: %s", modelo);
    printf("\nAno: %d", ano);
    printf("\nValor: R$ %.2f", valor);

    return 0;
}