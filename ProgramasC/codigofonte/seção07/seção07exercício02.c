#include <stdio.h>

int main(){
	for(int i = 1; i <= 100; i++){
	//for começa com uma variavel;uma condição de parada i<=100; e um incremento(i++)que vai fazer acontecer
	// a parada
	// ++ significa +1, então se tiver i valer 3, i++ será 4, acrescenta-se +1
		printf("%d\n", i);
		if(i % 10 == 0){
			printf("Múltiplo de 10\n");
		}

	}
}
