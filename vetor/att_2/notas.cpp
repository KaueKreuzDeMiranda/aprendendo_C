#include <stdio.h>
#define N 8

int main(){
	float notas[N];
	int qntApr = 0;
	int qntRpr = 0;
	
	for(int i = 0; i < N ; i++){
		printf("\nInsira a nota do %d aluno: " , (i + 1));
		scanf("%f" , &notas[i]);
		
		if(notas[i] >= 6){
			qntApr++;
		}else{
			qntRpr++;
		}
	}
	
	printf("\nNotas dos alunos:");
	for(int i = 0; i < N; i++){
		printf("\n%.2f" , notas[i]);
	}
	printf("\nQuantidade de alunos aprovados: %d" , qntApr);
	printf("\nQuantidade de alunos reprovados: %d" , qntRpr);
	
	return 0;
}