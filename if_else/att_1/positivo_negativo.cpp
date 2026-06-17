#include <stdio.h>

int main(){
	int valor;
	
	printf("Insira um valor: ");
	scanf("%d", &valor);
	
	if(valor > 0){
		printf("\nO valor e positivo!");
	}else if(valor < 0){
		printf("\nO valor e negativo!");
	}else{
		printf("\nO valor e zero!");
	}
	
	return 0;
}