#include <stdio.h>

int main(){
	//declaração de variaveis
	float altura, peso_ideal;

	//entradas
	printf("Qual é a sua altura?:  ");
	fflush(stdout);
	scanf("%f", &altura);

	//processamento
	peso_ideal = (altura * 72.7) - 58;

	//saída
	printf("Seu peso ideal seria %.2f", peso_ideal);

}
