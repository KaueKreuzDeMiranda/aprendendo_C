#include <stdio.h>

int main(){
	float temp;
	
	printf("Digite uma temperatura: ");
	scanf("%f", &temp);
	
	if(temp > 30){
		printf("\nA temperatura esta quente!");
	}else if(temp >= 15){
		printf("\nA temperatura esta agradavel!");
	}else{
		printf("\nA temperatura esta fria!");
	}
	
	return 0;
}