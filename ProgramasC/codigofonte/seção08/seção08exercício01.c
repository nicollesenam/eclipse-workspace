#include <stdio.h>

int main(){
	//variaveis
	int vetor[5], pares[5], cont_p = 0;
	                       //cont_p para contar a quantd de numeros pares
	//entradas
	for(int i = 0; i < 5; i++){
		printf("informe um valor para o vetor:  ");
		fflush(stdout);
		scanf("%d", &vetor[i]);
		//na posicao i porque inicia em 0 a contagem (0,1,2,3,4) > 5 elementos
		if(vetor[i] > 0 && vetor[i] % 2 == 0){
			pares[cont_p] = vetor[i];
			//usa-se contp pq o i ja foi usado, ai vai acrescentando pq come�a em 0.
			//vetor[i]' pois a vari�vel 'i' que faz o controle dos �ndices do vetor
			cont_p = cont_p + 1;
			// 'cont_p' est� recebendo o valor dela mesma mais 1.
			// Ou seja, se ela tiver o valor 1 receber� 1 + 1 ficando ent�o com valor 2.
		}
	}
	for(int i = 0; i < cont_p; i++){
		//cont aqui � pra imprimir todos os valores pares contidos no vetor de pares
		//apenas para apresentar a quantd de numeros pares, para que o i n�o ultrapasse
		//os numeros contados
		printf("%d", pares[i]);
	}
}
