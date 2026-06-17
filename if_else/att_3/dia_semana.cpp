#include <stdio.h>

int main(){
	int dia;
	
	printf("Insira um numero de 1 a 7: ");
	scanf("%d", &dia);
	
	printf("\n=== Dia da semana ===");
	
	if(dia == 1){
		printf("\nDomingo");
	}else if(dia == 2){	
		printf("\nSegunda-Feira");
	}else if(dia == 3){	
		printf("\nTerça-Feira");
	}else if(dia == 4){	
		printf("\nQuarta-Feira");
	}else if(dia == 5){	
		printf("\nQuinta-Feira");
	}else if(dia == 6){	
		printf("\nSexta-Feira");
	}else{
		printf("\nSabado");
	}
	
	return 0;
}