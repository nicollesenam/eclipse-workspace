#include <stdio.h>

int main(){
	//variaveis
	int n;

    //entrada
	printf("Informe um número:  ");
	fflush(stdout);
	scanf("%d", &n);

	//processamento
	if(n > 100){
		printf("%d",n);

	}else{
		n = 0;
		printf("%d",n);

	}

}
