#include <stdio.h>
#include <float.h>
#define N 7

int main(){
	float precos[N];
	float precoRequisitado;
	float maisCaro = 0;
	float maisBarato = FLT_MAX;
	bool encontrado = false;
	
	for(int i = 0; i < N; i++){
		printf("\nInsira o preco do %d livro: " , (i + 1));
		scanf("%f" , &precos[i]);
		
		if(precos[i] > maisCaro){
			maisCaro = precos[i];
		}
		if(precos[i] < maisBarato){
			maisBarato = precos[i];
		}
	}
	
	printf("\nInsira um valor para procurar no vetor: ");
	scanf("%f" , & precoRequisitado);
	
	for(int i = 0; i < N; i++){
		if(precoRequisitado == precos[i]){
			printf("\nPreco encontrado na posicao: %d" , (i + 1));
			encontrado = true;
			break;
		}
	}
	
	if(!encontrado){
		printf("\nPreco nao encontrado");
	}
	printf("\nPreco mais caro: %.2f" , maisCaro);
	printf("\nPreco mais barato: %.2f" , maisBarato);
	
	return 0;
}