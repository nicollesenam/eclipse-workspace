#include <stdio.h>
#include <string.h>

int main(){
    //variaveis
    char nome[100], senha[100];
        //usa char pq linguagem c nao tem string, que é o que seria pq
    //char so tem 1 letra/₢aractere, string tem varias. Linguagem c precisa
    //criar vetor pra criar string nome[100], vetor cm 100 posicoes

    //entradas
    printf("Informe seu nome de usu�rio:  ");
    gets(nome);
    printf("Informe sua senha:  ");
    gets(senha);

    while(!strcmp(nome, senha)){
    	printf("Nome de usu�rio e senha devem ser diferentes");
    	printf("Informe seu nome de usu�rio:  ");
    	gets(nome);
    	printf("Informe sua senha:  ");
    	gets(senha);

    }
}
