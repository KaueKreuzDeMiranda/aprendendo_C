#include <stdio.h>

int main(){
	int vetor[5];
	
	for(int i = 0 ; i < 5 ; i++){
		printf("Digite um numero: ");
		scanf("%d" , &vetor[i]);
	}
	
	printf("\nVetor ao contrario:");
	for(int i = 4 ; i >= 0 ; i--){
		printf("\n%d" , vetor[i]);
	}
	
	return 0;
}