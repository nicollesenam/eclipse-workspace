#include <stdio.h>

int main(){
	int numero, a, b;

	printf("Informe um n�mero:  ");
	fflush(stdout);
	scanf("%d", &numero);

	if (numero > 0){
		a = numero;
		printf("O %d n�mero � positivo", a);

	}else{
		b = numero;
		printf("O %d n�mero � negativo", b);
	}
}
