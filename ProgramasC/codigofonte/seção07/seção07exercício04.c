#include <stdio.h>

int main(){
	//Variaveis
    int valor, maior = -999, menor = 999, soma = 0;
    //Inicializamos estas variáveis com valores altos de forma inversa para tentar garantir que os valores
    //informados pelo usuário serão maiores ou menores que estes valores informados e desta forma esta
    //variável receba o valor informado pelo usuário.
    float media;

    //entradas
    for(int i = 0; i < 10; i++){
        printf("informe um valor:  ");
        fflush(stdout);
        scanf("%d", &valor);
        //processamento
        if(valor > 0){
            if(valor > maior){
               maior = valor;
            }
            if(valor < menor){
               menor = valor;
            }
            soma = soma + valor;
        }else{
            i--;
            //se o usuario informar valor negativo, o valor de i vai diminuir, e vai pedir outro numero
            //ate que seja positivo para processar
        }
    }
    media = soma / 10;
    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
    printf("A média dos números é:  %2.f", media);
}
