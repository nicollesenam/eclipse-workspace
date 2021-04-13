#include <stdio.h>

int main(){
	int numero;

    printf("Informe um número:  ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero % 2 == 0){
		if(numero > 0){
			printf("O número escolhido %d é par e positivo.", numero);

		}else{
			printf("O número escolhido %d é par e negativo.", numero);
		}
	}else{
		if(numero > 0){
			printf("O número escolhido %d é ímpar positivo.", numero);

		}else{
			printf("O número escolhido %d é ímpar negativo.", numero);

		}




	}

}
