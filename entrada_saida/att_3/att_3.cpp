#include <stdio.h>

int main() {
    char nome[100];
    int idadeAtual;

    printf("Digite o nome da pessoa: ");
    scanf("%s", &nome);

    printf("Digite a idade atual: ");
    scanf("%d", &idadeAtual);

    int idadeFutura = idadeAtual + 10;

    printf("\nNome: %s", nome);
    printf("\nIdade atual: %d anos", idadeAtual);
    printf("\nDaqui a 10 anos tera: %d anos", idadeFutura);

    return 0;
}