#include <stdio.h>

int main(){
	//declara��o de vari�veis
	int num1, num2, soma;

	//entradas
	printf("Informe o primeiro n�mero:  ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Informe o segundo n�mero:  ");
	fflush(stdout);
	scanf("%d", &num2);

	//processamento
	soma = num1 + num2;

	//sa�da
	printf("O resultado da soma � %d", soma);

}
