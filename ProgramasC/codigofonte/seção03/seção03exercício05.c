#include <stdio.h>

int main(){
	//declarando variaveis
	int metros, centimetros;

	//entrada
	printf("Informe o valor em metros:  ");
	fflush(stdout);
	scanf("%d", &metros);

	//processamento
	centimetros = (metros * 100);

	//saída
	printf("%d em centimetros é %d", metros, centimetros);


}
