#include <stdio.h>

int main(){
	float valorCompra;
	float frete;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &valorCompra);
	
	if(valorCompra >= 150){
		printf("\nFrete gratis!");
	}else{
		frete = valorCompra * 0.1;
		printf("\nValor do frete: R$ %.2f", frete);
	}
	
	return 0;
}