#include <stdio.h>

int main(){
	float nota;
	
	printf("Insira a sua nota: ");
	scanf("%f", &nota);
	
	printf("\n=== Situacao do aluno ===");
	
	if(nota >= 60){
		printf("\nAluno aprovado!");
	}else if(nota >= 40){	
		printf("\nAluno de recuperacao!");
	}else{
		printf("\nAluno reprovado!");
	}
	
	return 0;
}