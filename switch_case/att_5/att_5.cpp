#include <stdio.h>

int main(){
	int opcao;
	
	printf("Redirecionar a mensagem para qual setor?"
			"\n1 - Falha na internet"
			"\n2 - Faturas em aberto"
			"\n3 - Alteracao de cadastro\n");
	scanf("%d" , &opcao);
	
	switch(opcao){
		case 1:
			printf("\nRepassando para o setor de falhas na internet.");
			break;
		case 2:
			printf("\nRepassando para o setor de faturas em aberto.");
			break;
		case 3:
			printf("\nRepassando para o setor de alteracao de cadastro.");
			break;
		default:
			printf("\nInsira uma opcao valida!");
	}
	
	return 0;
}