#include <stdio.h>

int main(){
	//declara��o de vari�veis
	int n1, n2, n3, n4, q1, q2, q3, q4;

    //entradas
	printf("Digite um valor para o n�mero 1:  ");
	fflush(stdout);
	scanf("%d", &n1);
	printf("Digite um valor para o n�mero 2:  ");
	fflush(stdout);
	scanf("%d", &n2);
	printf("Digite um valor para o n�mero 3:  ");
    fflush(stdout);
	scanf("%d", &n3);
	printf("Digite um valor para o n�mero 4:  ");
	fflush(stdout);
	scanf("%d", &n4);

    //Processamento
	q1 = n1 * n1;
	q2 = n2 * n2;
	q3 = n3 * n3;
	q4 = n4 * n4;

	//sa�das
	if(q3 >= 100){
		printf("%d", q3);
	}else{
		printf("O quadrado do n�mero 1 �: %d\n", q1);
		printf("O quadrado do n�mero 2 �: %d\n", q2);
		printf("O quadrado do n�mero 3 �: %d\n", q3);
		printf("O quadrado do n�mero 4 �: %d\n", q4);

	}


}
