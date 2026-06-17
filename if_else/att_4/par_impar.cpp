#include <stdio.h>

int main(){
	int numero;
	
	printf("Insira um numero: ");
	scanf("%d", &numero);
	
	if(numero % 2 == 0){
		printf("\nO numero e par!");
	}else{
		printf("\nO numero e impar!");
	}
	
	return 0;
}