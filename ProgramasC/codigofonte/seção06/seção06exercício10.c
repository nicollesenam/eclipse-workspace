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
		printf("Voc� � da categoria infantil-a.");
	}else{
		if(idade >= 8 && idade <= 11){
	    printf("Voc� � da categoria infantil-b.");
	}else{
		if(idade >= 12 && idade <= 13){
		printf("Voc� � da categoria juvenil-a.");
	}else{
		if(idade >= 14 && idade <= 17){
		printf("Voc� � da categoria juvenil-b.");
	}else{
		printf("Voc� � da categoria adultos.");


		}
	}
		}
	}
}
