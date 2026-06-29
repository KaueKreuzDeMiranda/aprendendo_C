#include <stdio.h>

int main(){
	float valor1, valor2;
	char operacao;
	
	printf("Insira o primeiro valor: ");
	scanf("%f" , &valor1);
	printf("\nInsira o segundo valor: ");
	scanf("%f" , &valor2);
	printf("\nInsira o simbolo da operacao desejada: ");
	scanf(" %c" , &operacao);
	
	switch(operacao){
		case '+':
			printf("\nResultado: %.2f" , (valor1 + valor2));
			break;
		case '-':
			printf("\nResultado: %.2f" , (valor1 - valor2));
			break;
		case '*':
			printf("\nResultado: %.2f" , (valor1 * valor2));
			break;
		case '/':
			printf("\nResultado: %.2f" , (valor1 / valor2));
			break;
		default:
			printf("\nInsira uma opcao valida!");
	}
	
	return 0;
}