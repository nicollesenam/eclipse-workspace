#include <stdio.h>

int main(){
	int vetor[5], pares[5], cont_p = 0;

	for(int i = 0; i < 5; i++){
		printf("Informe um valor para o vetor:  ");
		fflush(stdout);
		scanf("%d", &vetor[i]);
		if(vetor[i] > 0 && vetor[i] % 2 == 0){
			pares[i] = vetor[i];
			cont_p = cont_p + 1;
		printf("%d\n", pares[i]);


		}
	}
}
