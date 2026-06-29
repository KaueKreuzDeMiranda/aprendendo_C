#include <stdio.h>

int main(){
	int escolha;
	
	printf("Escolha um numero para ver a tabuada: ");
	scanf("%d" , &escolha);
	
	for(int i = 1; i <= 10; i++){
		printf("\n%d x %d = %d" , escolha , i , (escolha * i));
	}
	
	return 0;
}