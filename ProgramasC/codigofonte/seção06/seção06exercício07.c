#include <stdio.h>

int main(){
	//declaração de variáveis
	int n1, n2, n3, n4, q1, q2, q3, q4;

    //entradas
	printf("Digite um valor para o número 1:  ");
	fflush(stdout);
	scanf("%d", &n1);
	printf("Digite um valor para o número 2:  ");
	fflush(stdout);
	scanf("%d", &n2);
	printf("Digite um valor para o número 3:  ");
    fflush(stdout);
	scanf("%d", &n3);
	printf("Digite um valor para o número 4:  ");
	fflush(stdout);
	scanf("%d", &n4);

    //Processamento
	q1 = n1 * n1;
	q2 = n2 * n2;
	q3 = n3 * n3;
	q4 = n4 * n4;

	//saídas
	if(q3 >= 100){
		printf("%d", q3);
	}else{
		printf("O quadrado do número 1 é: %d\n", q1);
		printf("O quadrado do número 2 é: %d\n", q2);
		printf("O quadrado do número 3 é: %d\n", q3);
		printf("O quadrado do número 4 é: %d\n", q4);

	}


}
