#include <stdio.h>

int main(){
	float indice;

	printf("Informe o índice de poluição:  ");
	fflush(stdout);
	scanf("%f", &indice);

	if(indice >= 0.3 && indice < 0.4){
		printf("Atenção: indústrias do grupo 1 devem suspender as atividades.");

	}else{
		if(indice >= 0.4 && indice < 0.5){
		printf("Atenção: indústrias dos grupos 1 e 2 devem suspender as atividades.");
	}else{
		if(indice >= 0.5 ){
		printf("Atenção: todas as indústrias devem suspender as atividades.");

	}else{
		printf("Níveis aceitáveis.");
	}

	}

	}
}
