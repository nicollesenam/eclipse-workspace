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

	//sa�da
	printf("%d em centimetros � %d", metros, centimetros);


}
