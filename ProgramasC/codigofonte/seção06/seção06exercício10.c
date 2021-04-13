#include <stdio.h>

int main(){
	//variaveis
	int idade;

	//entradas:
	printf("Informe a sua idade:  ");
	fflush(stdout);
	scanf("%d", &idade);

	//processamento
	if(idade >= 5 && idade <= 7){
		printf("Você é da categoria infantil-a.");
	}else{
		if(idade >= 8 && idade <= 11){
	    printf("Você é da categoria infantil-b.");
	}else{
		if(idade >= 12 && idade <= 13){
		printf("Você é da categoria juvenil-a.");
	}else{
		if(idade >= 14 && idade <= 17){
		printf("Você é da categoria juvenil-b.");
	}else{
		printf("Você é da categoria adultos.");


		}
	}
		}
	}
}
