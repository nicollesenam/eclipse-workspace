#include <stdio.h>

int main(){
	//variaveis
	int vetor[10];
        // 0, 1,2,3,4,5,6,7,8,9
	//entradas
	for(int i = 0; i < 10; i++){
		printf("Digite um valor:  ");
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}
	for(int i = 9; i >= 0; i--){
		// 9,8,7,6,5,4,3,2,1,0
		// i-- porque vai diminuir do 9 ate chegar em 0
		printf("%d\n", vetor[i]);
	}
}
