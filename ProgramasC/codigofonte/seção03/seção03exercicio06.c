#include <stdio.h>

int main(){
	//declara�ao de vari�veis
	float valor_por_hora, salario;
	int horas_trabalhadas;

	//entradas
	printf("Qual valor voc� ganha por hora?:  ");
    fflush(stdout);
    scanf("%f", &valor_por_hora);

    printf("Quantas horas voc� trabalhou neste m�s?:  ");
    fflush(stdout);
    scanf("%d", &horas_trabalhadas);

    //processamento
    salario = (horas_trabalhadas * valor_por_hora);

    //sa�da
    printf("O total do seu sal�rio nesse m�s � R$ %.2f", salario);
    //coloca o .2 pra tirar duas casas decimais do resultado, se n�o ia ficar muito
    //grande tipo 160.00000
}
