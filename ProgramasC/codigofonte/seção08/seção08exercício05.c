#include <stdio.h>

int main(){
	//variaveis
	int vetor[10];
	char maior_50 = 0; //ou seja, igual a zero pq inicia sem maior que 50

    //entradas
	for(int i = 0; i < 10; i++){
		printf("Digite um valor para o vetor %d/10:  ", (i+1));
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}
	//precisa de outro loop pra verificar se os numeros informados sao maiores que 50
	for(int i = 0; i < 10; i++){
		if(vetor[i] > 50){
			printf("Valor %d maior que 50 est� na posi��o %d\n", vetor[i], i);
			maior_50 = 1;
		}
		if(maior_50 < 1){
			printf("N�o existe nenhum n�mero maior que 50\n");
		}
	}

}
