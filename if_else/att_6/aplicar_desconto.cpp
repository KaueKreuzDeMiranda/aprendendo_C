#include <stdio.h>

int main(){
	float valorCompra, valorDesconto;
	
	printf("Insira o valor da compra: ");
	scanf("%f", &valorCompra);
	
	printf("\nValor da compra: R$ %.2f", valorCompra);
	
	if(valorCompra > 100){
		valorDesconto = valorCompra * 0.9;
		printf("\nValor da compra com desconto: R$ %.2f" , valorDesconto);
	}
	
	return 0;
}