#include <stdio.h>

int main(){
	//variaveis
	int codigo;
	float vetor[5];
    //entradas
	printf("Digite o código:  ");
	fflush(stdout);
	scanf("%d", &codigo);

	if(codigo != 0){
		for(int i = 0; i < 5; i++){
			printf("Digite um número real para o vetor:  ");
			fflush(stdout);
		    scanf("%f", &vetor[i]);
		}
		if(codigo == 1){
			for(int i = 0; i < 5; i++){
				printf("%.2f\n", vetor[i]);
		    }
		}
		if(codigo == 2){
			for(int i =  4; i >= 0; i--){
				printf("%.2f\n", vetor[i]);
			}
		}
	}
}
