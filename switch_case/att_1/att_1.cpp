#include <stdio.h>

int main(){
	int dia;
	
	printf("Insira um numero para descobrir o dia: ");
	scanf("%d" , &dia);
	
	switch(dia){
		case 1:
			printf("\nO numero digitado foi %d, e o dia e Domingo." , dia);
			break;
		case 2:
			printf("\nO numero digitado foi %d, e o dia e Segunda-Feira." , dia);
			break;
		case 3:
			printf("\nO numero digitado foi %d, e o dia e Terca-Feira." , dia);
			break;
		case 4:
			printf("\nO numero digitado foi %d, e o dia e Quarta-Feira." , dia);
			break;
		case 5:
			printf("\nO numero digitado foi %d, e o dia e Quinta-Feira." , dia);
			break;
		case 6:
			printf("\nO numero digitado foi %d, e o dia e Sexta-Feira." , dia);
			break;
		case 7:
			printf("\nO numero digitado foi %d, e o dia e Sabado." , dia);
			break;
		default:
			printf("\nInsira uma opcao valida!");
	}	
	
	return 0;
}