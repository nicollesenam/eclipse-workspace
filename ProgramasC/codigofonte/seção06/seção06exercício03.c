#include <stdio.h>

int main(){
	//declara��o de variaveis
	int numero, p = 0, i = 0;

	//entradas
	printf("Informe um n�mero:  ");
	fflush(stdout);
	scanf("%d", &numero);

	//Processamento
	if (numero % 2 == 0){
		p = numero;
	}else{
		i = numero;
	}
    printf("O n�mero %d � par\n", p);
    printf("O n�mero %d � �mpar", i);

    //quando tem \n signfica que vai pular uma linha para o prox texto
}
