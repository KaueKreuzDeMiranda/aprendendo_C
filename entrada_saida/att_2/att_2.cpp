#include <stdio.h>

int main() {
    char produto[100];
    int quantidade;
    float preco;

    printf("Digite o nome do produto: ");
    scanf("%s", &produto);

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &quantidade);

    printf("Digite o preco unitario: ");
    scanf("%f", &preco);

    printf("\n=== PRODUTO CADASTRADO ===");
    printf("\nProduto: %s", produto);
    printf("\nQuantidade: %d", quantidade);
    printf("\nPreco: R$ %.2f", preco);

    return 0;
}