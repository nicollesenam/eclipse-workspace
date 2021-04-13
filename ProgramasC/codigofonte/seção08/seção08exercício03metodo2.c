#include <stdio.h>

int main(){
	int vetor[10];

	for(int i = 0; i < 10; i++){
		printf("digite um valor:  ");
		fflush(stdout);
		scanf("%d", &vetor[i]);
		if(vetor[i] > 10){
			printf("Número deve ser entre 0 e 10\n");
			printf("digite um valor:  ");
			fflush(stdout);
			scanf("%d", &vetor[i]);
		}
	}
	for(int i = 9; i >= 0; i--){
		printf("%d\n", vetor[i]);
	}
}
