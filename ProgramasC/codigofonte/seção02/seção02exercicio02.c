#include <stdio.h>
// std = standard (padrão)
// io = input/output (entrada/saída)

int main(){
	//declaração de variáveis
	int num1, num2, soma, multiplicacao;

	//entradas
	printf("Informe o primeiro número:  ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Informe o segundo número:  ");
	fflush(stdout);
	scanf("%d", &num2);

	//processamentos
	soma = num1 + num2;
	multiplicacao = soma * num1;

	//saída
	printf("O resultado da multiplicacao é %d", multiplicacao);

}
