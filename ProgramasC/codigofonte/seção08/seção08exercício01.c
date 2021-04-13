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
			//usa-se contp pq o i ja foi usado, ai vai acrescentando pq começa em 0.
			//vetor[i]' pois a variável 'i' que faz o controle dos índices do vetor
			cont_p = cont_p + 1;
			// 'cont_p' está recebendo o valor dela mesma mais 1.
			// Ou seja, se ela tiver o valor 1 receberá 1 + 1 ficando então com valor 2.
		}
	}
	for(int i = 0; i < cont_p; i++){
		//cont aqui é pra imprimir todos os valores pares contidos no vetor de pares
		//apenas para apresentar a quantd de numeros pares, para que o i não ultrapasse
		//os numeros contados
		printf("%d", pares[i]);
	}
}
