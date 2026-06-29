#include <stdio.h>

int main(){
	int soma = 0;
	
	for(int i = 1; i <= 100; i++){
		soma += i;
	}
	
	printf("A soma de 0 a 100 e igual a: %d" , soma);
	
	return 0;
}