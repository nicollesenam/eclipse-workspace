#include <stdio.h>

int main(){
	for(int i = 1; i <= 100; i++){
	//for come�a com uma variavel;uma condi��o de parada i<=100; e um incremento(i++)que vai fazer acontecer
	// a parada
	// ++ significa +1, ent�o se tiver i valer 3, i++ ser� 4, acrescenta-se +1
		printf("%d\n", i);
		if(i % 10 == 0){
			printf("M�ltiplo de 10\n");
		}

	}
}
