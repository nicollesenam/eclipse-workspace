#include <stdio.h>

int main(){
	//declara��o de variaveis
	int c;
	float n, e = 0, salario, valor_hora = 10.00;

    //entradas
	printf("Informe o c�digo:  ");
	fflush(stdout);
	scanf("%d", &c);
	printf("Quantas horas voc� trabalhou?:  ");
	fflush(stdout);
	scanf("%f", &n);

    //processamento
	if(n > 50){
		e = (n - 50) * 20.00;
		salario = (50 * valor_hora) + e;
		//sa�das1 e 2
		printf("Sal�rio total R$ %.2f\n", salario);
		printf("Sal�rio excedente R$ %.2f", e);
	}else{
		salario = n * valor_hora;
		//sa�das3 e 4
		printf("Sal�rio Total R$ %.2f\n", salario);
		printf("Sal�rio excedente R$ %.2f", e);

	}
}
