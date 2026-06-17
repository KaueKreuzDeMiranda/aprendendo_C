#include <stdio.h>

int main(){
	float nota;
	
	printf("Digite a sua nota: ");
	scanf("%f", &nota);
	
	if(nota >= 9){
		printf("\nSeu conceito e A!");
	}else if(nota >=7){
		printf("\nSeu conceito e B!");
	}else if(nota >=5){
		printf("\nSeu conceito e C!");
	}else{
		printf("\nReprovado!");
	}
	
	return 0;
}