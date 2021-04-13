#include <stdio.h>

int main(){
	//declaração de variaveis
	int c;
	float n, e = 0, salario, valor_hora = 10.00;

    //entradas
	printf("Informe o código:  ");
	fflush(stdout);
	scanf("%d", &c);
	printf("Quantas horas você trabalhou?:  ");
	fflush(stdout);
	scanf("%f", &n);

    //processamento
	if(n > 50){
		e = (n - 50) * 20.00;
		salario = (50 * valor_hora) + e;
		//saídas1 e 2
		printf("Salário total R$ %.2f\n", salario);
		printf("Salário excedente R$ %.2f", e);
	}else{
		salario = n * valor_hora;
		//saídas3 e 4
		printf("Salário Total R$ %.2f\n", salario);
		printf("Salário excedente R$ %.2f", e);

	}
}
