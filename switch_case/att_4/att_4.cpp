#include <stdio.h>

int main(){
	int produto, quantidade;
	
	printf("Qual produto voce deseja?"
			"\n1 - Pastel"
			"\n2 - Pizza"
			"\n3 - Coxinha"
			"\n4 - HotDog\n");
	scanf("%d" , &produto);
	
	printf("\nInsira a quantidade: ");
	scanf("%d" , & quantidade);
	
	switch(produto){
		case 1:
			printf("\nO valor e: %d" , (5 * quantidade));
			break;
		case 2:
			printf("\nO valor e: %d" , (8 * quantidade));
			break;
		case 3:
			printf("\nO valor e: %d" , (4 * quantidade));
			break;
		case 4:
			printf("\nO valor e: %d" , (8 * quantidade));
			break;
		default:
			printf("\nInsira uma opcao valida do menu!");
	}
	
	return 0;
}