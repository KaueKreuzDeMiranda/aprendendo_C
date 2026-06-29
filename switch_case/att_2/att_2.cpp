#include <stdio.h>

int main(){
	int opcao;
	
	printf("O que voce deseja fazer?"
			"\n1 - Cadastrar aluno"
			"\n2 - Consultar notas"
			"\n3 - Atualizar dados"
			"\n4 - Sair\n");
	scanf("%d" , &opcao);
	
	switch(opcao){
		case 1:
			printf("\nCadastrando aluno...");
			break;
		case 2:
			printf("\nConsultando notas...");
			break;
		case 3:
			printf("\nAtualizando dados...");
			break;
		case 4:
			printf("\nSaindo...");
			break;
		default:
			printf("\nInisra uma opcao valida!");
	}
	
	return 0;
}