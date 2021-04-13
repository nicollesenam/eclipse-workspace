#include <stdio.h>

int main(){
	//declaração de variáveis
	int num1, num2, soma;

	//entradas
	printf("Informe o primeiro número:  ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Informe o segundo número:  ");
	fflush(stdout);
	scanf("%d", &num2);

	//processamento
	soma = num1 + num2;

	//saída
	printf("O resultado da soma é %d", soma);

}
