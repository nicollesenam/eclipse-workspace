#include <stdio.h>

int main(){
	int vetor[20], soma = 0;

	for(int i = 0; i < 20; i++){
		printf("Digite um valor para o vetor %d/20:  ", (i+1));
		                         //só para dizer que sao 20 numeros no total
		                         //se eu escolhi o valor 4 para o vetor, entao sao 4 de 20 (4/20)
		                         // por isso o i + 1 (0 + 1)
		fflush(stdout);
		scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
	}
	printf("Soma dos elementos: %d ", soma);
}
