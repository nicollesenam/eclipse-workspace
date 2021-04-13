#include <stdio.h>

int main(){
	int numero, a, b;

	printf("Informe um número:  ");
	fflush(stdout);
	scanf("%d", &numero);

	if (numero > 0){
		a = numero;
		printf("O %d número é positivo", a);

	}else{
		b = numero;
		printf("O %d número é negativo", b);
	}
}
