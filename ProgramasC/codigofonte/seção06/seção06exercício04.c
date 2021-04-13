#include <stdio.h>
#include <ctype.h>

int main(){
	float altura, peso_ideal;
	char sexo;
	//char signfica caracteres, no caso masculino e feminino

	printf("Informe sua altura:  ");
	fflush(stdout);
	scanf("%f", &altura);
    gets(stdin); //serve para corrigir bugs
    printf("Informe o sexo m/f:  ");
    fflush(stdout);
	scanf("%c", &sexo);

	if(tolower(sexo) == 'm'){ //definido por char precisa colocar ' '
		peso_ideal = (72.7 * altura) - 58;
		printf("O seu peso ideal é %.2f", peso_ideal);
//tolower faz tudo ficar no parametro que esta ali, tudo minusculo
//entao se a pessoa digitar maiusculo, fica minusculo
	}
	if(tolower(sexo) == 'f'){
	peso_ideal = (62.1 * altura) - 44.7;
	printf("O seu peso ideal é %.2f", peso_ideal);

    }
	if(tolower(sexo) != 'm' && tolower(sexo) != 'f'){
    	printf("Sexo não reconhecido. \n");
    }
}
