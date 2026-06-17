#include <stdio.h>

int main(){
	float peso, altura;
	
	printf("Insira o seu peso: ");
	scanf("%f", &peso);
	printf("\nInsira a sua altura: ");
	scanf("%f", &altura);
	
	float IMC = peso / (altura * altura);
	
	printf("IMC: %.2f", IMC);
	
	if(IMC > 30){
		printf("\nIMC: Obesidade");
	}else if(IMC > 25){
		printf("\nIMC: Sobrepeso");
	}else if(IMC > 18.6){
		printf("\nIMC: Peso normal");
	}else{
		printf("\nIMC: Abaixo do peso");
	}
	
	return 0;
}