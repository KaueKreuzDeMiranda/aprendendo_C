#include <stdio.h>

int main(){
	float soma = 0;
	
	for(int i = 1; i <= 5; i++){
		float nota;
		
		printf("Insira a nota do %d aluno: " , i);
		scanf("%f" , &nota); 
		
		soma += nota;
	}
	
	float media = soma / 5;
	printf("A media das notas da turma e de: %.2f" , media);
	
	return 0;
}