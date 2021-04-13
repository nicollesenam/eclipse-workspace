#include <stdio.h>

int main(){
	//variaveis
	int vetor1[10], vetor2[10], soma[10];
	//a soma já é o terceiro vetor
    //entradas
	for(int i = 0; i < 10; i++){
		printf("Digite um valor para o primeiro vetor:  ");
		fflush(stdout);
		scanf("%d", &vetor1[i]);
		printf("Digite um valor para o segundo vetor:  ");
		fflush(stdout);
		scanf("%d", &vetor2[i]);
        //processamento
        soma[i] = vetor1[i] + vetor2[i];

	}
    for(int i = 0; i < 10; i++){
    	//usa outro for pq sao dois vetores, esse vai mostrar
    	//o segundo vetor
    	printf("A soma dos vetores nessa posição é %d\n", soma[i]);
    }
}
