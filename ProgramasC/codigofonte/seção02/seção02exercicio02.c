#include <stdio.h>
// std = standard (padr�o)
// io = input/output (entrada/sa�da)

int main(){
	//declara��o de vari�veis
	int num1, num2, soma, multiplicacao;

	//entradas
	printf("Informe o primeiro n�mero:  ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Informe o segundo n�mero:  ");
	fflush(stdout);
	scanf("%d", &num2);

	//processamentos
	soma = num1 + num2;
	multiplicacao = soma * num1;

	//sa�da
	printf("O resultado da multiplicacao � %d", multiplicacao);

}
