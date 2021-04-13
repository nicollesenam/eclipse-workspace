#include <stdio.h>

int main(){
	//declaração de variaveis
	float m, p;
	char e[8] = "excesso"; // sao 7 letras mas a programacao tdoa
			               //palavra termina com \0, entao excesso\0

	//entradas
	printf("Informe peso dos peixes:  ");
	fflush(stdout);
	scanf("%f", &p);

	//processamento
	if(p > 50){
		m = (p - 50) * 4;
		//saída1
		printf("A multa que deverá pagar é no valor de R$ %.2f", m);

	}else{
		e[0] = 0;
		m = 0;
		//saídas2 e 3
		printf("Multas:  %.2f\n", m);
        printf("Excesso  %d \n", e[0]);

	}
}
