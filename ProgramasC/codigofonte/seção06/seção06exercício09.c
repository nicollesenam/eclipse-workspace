#include <stdio.h>

int main(){
	float indice;

	printf("Informe o �ndice de polui��o:  ");
	fflush(stdout);
	scanf("%f", &indice);

	if(indice >= 0.3 && indice < 0.4){
		printf("Aten��o: ind�strias do grupo 1 devem suspender as atividades.");

	}else{
		if(indice >= 0.4 && indice < 0.5){
		printf("Aten��o: ind�strias dos grupos 1 e 2 devem suspender as atividades.");
	}else{
		if(indice >= 0.5 ){
		printf("Aten��o: todas as ind�strias devem suspender as atividades.");

	}else{
		printf("N�veis aceit�veis.");
	}

	}

	}
}
