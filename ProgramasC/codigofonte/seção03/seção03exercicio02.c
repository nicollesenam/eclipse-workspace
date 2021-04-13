#include <stdio.h>

int main(){
	//declarando variáveis
	int quantidade_minima, quantidade_maxima;
	float estoque_medio;

    //entradas
	printf("Informe a quantidade mínima:  ");
	fflush(stdout);
	scanf("%d", &quantidade_minima);

	printf("Informe a quantidade máxima:  ");
	fflush(stdout);
	scanf("%d", &quantidade_maxima);

	//processamento
	estoque_medio = (quantidade_minima + quantidade_maxima) / 2;

	//saída
	printf("O estoque médio é %.2f", estoque_medio);

}
