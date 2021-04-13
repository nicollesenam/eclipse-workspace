#include <stdio.h>

int main(){
	//declaração de variaveis
	int numero, p = 0, i = 0;

	//entradas
	printf("Informe um número:  ");
	fflush(stdout);
	scanf("%d", &numero);

	//Processamento
	if (numero % 2 == 0){
		p = numero;
	}else{
		i = numero;
	}
    printf("O número %d é par\n", p);
    printf("O número %d é ímpar", i);

    //quando tem \n signfica que vai pular uma linha para o prox texto
}
