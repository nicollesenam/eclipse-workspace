#include <stdio.h>

int main(){
	//declaraçao de variáveis
	float valor_por_hora, salario;
	int horas_trabalhadas;

	//entradas
	printf("Qual valor você ganha por hora?:  ");
    fflush(stdout);
    scanf("%f", &valor_por_hora);

    printf("Quantas horas você trabalhou neste mês?:  ");
    fflush(stdout);
    scanf("%d", &horas_trabalhadas);

    //processamento
    salario = (horas_trabalhadas * valor_por_hora);

    //saída
    printf("O total do seu salário nesse mês é R$ %.2f", salario);
    //coloca o .2 pra tirar duas casas decimais do resultado, se não ia ficar muito
    //grande tipo 160.00000
}
