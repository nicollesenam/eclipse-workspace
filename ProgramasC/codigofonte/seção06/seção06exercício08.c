#include <stdio.h>

int main(){
	int numero;

    printf("Informe um n�mero:  ");
	fflush(stdout);
	scanf("%d", &numero);

	if(numero % 2 == 0){
		if(numero > 0){
			printf("O n�mero escolhido %d � par e positivo.", numero);

		}else{
			printf("O n�mero escolhido %d � par e negativo.", numero);
		}
	}else{
		if(numero > 0){
			printf("O n�mero escolhido %d � �mpar positivo.", numero);

		}else{
			printf("O n�mero escolhido %d � �mpar negativo.", numero);

		}




	}

}
