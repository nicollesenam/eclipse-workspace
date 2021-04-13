#include <stdio.h>

int main(){
	int vetor1[10], vetor2[10], soma[20];

	for(int i = 0; i < 10; i++){
		printf("Informe o valor do primeiro vetor:  ");
		fflush(stdout);
		scanf("%d", &vetor1[i]);
		printf("Informe o valor do segundo vetor:  ");
		fflush(stdout);
		scanf("%d", &vetor2[i]);

		soma[i] = vetor1[i] + vetor2[i];
		printf("A soma dos vetores nessa posição é %d\n", soma[i]);
	}
}
