#include <stdio.h>
#define N 10

int main(){
	float temperaturas[N];
	float soma = 0;
	float maiorTemp = 0;
	int horasFora = 0;
	int horaMaior = 0;
	
	for(int i = 0; i < N; i++){
		printf("\nInsira a %d temperatura registrada: " , (i + 1));
		scanf("%f" , &temperaturas[i]);
		
		soma += temperaturas[i];
		
		if(temperaturas[i] > 8 || temperaturas[i] < 2){
			horasFora++;
		}
		if(temperaturas[i] > maiorTemp){
			maiorTemp = temperaturas[i];
			horaMaior = (i + 1);
		}
	}
	
	printf("\nTemperaturas registradas:");
	for(int i = 0; i < N; i++){
		printf("\n%.2f" , temperaturas[i]);
	}
	printf("\nTemperatura media: %.2f" , (soma / N));
	printf("\nHoras fora da faixa segura: %d" , horasFora);
	printf("\nHora da maior temperatura: %d" , horaMaior);
	
	return 0;
}