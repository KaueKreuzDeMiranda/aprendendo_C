#include <stdio.h>
#include <float.h>
# define N 6

int main(){
	float vetor[N];
	float soma = 0;
	float maisCaro = 0;
	float maisBarato = FLT_MAX;
	
	for(int i = 0; i < N ; i++){
		printf("\nInsira o preco do %d produto: " , (i + 1));
		scanf("%f" , &vetor[i]);
		
		soma += vetor[i];
		
		if(vetor[i] > maisCaro){
			maisCaro = vetor[i];
		}
		if(vetor[i] < maisBarato){
			maisBarato = vetor[i];
		}
	}
	
	printf("\nPrecos digitados:");
	for(int i = 0; i < N; i++){
		printf("\n%.2f" , vetor[i]);
	}
	printf("\nPreco mais caro: %.2f" , maisCaro);
	printf("\nPreco mais barato: %.2f" , maisBarato);
	printf("\nMedia precos: %.2f" , (soma / N));
	
	return 0;
}