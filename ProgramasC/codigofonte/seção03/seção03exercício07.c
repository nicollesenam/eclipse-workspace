#include <stdio.h>

int main(){
	//declara��o de variaveis
	float altura, peso_ideal;

	//entradas
	printf("Qual � a sua altura?:  ");
	fflush(stdout);
	scanf("%f", &altura);

	//processamento
	peso_ideal = (altura * 72.7) - 58;

	//sa�da
	printf("Seu peso ideal seria %.2f", peso_ideal);

}
