//instru��o switch
package geek;

public class Programa06 {
	public static void main(String[] args) {
		int numero = 3;
		
		//switch tem um valor como parametro no caso o numero
		//e tem os casos; cada case faz uma verifica��o
		//break � pra sair e n verificar o restante
		switch (numero){
			case 1:
				System.out.println("o n�mero � 1");
				break;
			case 3:
				System.out.println("o n�mero � 3");
				break;
			case 5:
				System.out.println("o n�mero � 5");
				break;
			//valor default � opcional mas serve para aparecer
			//qnd nenhum case resolver o problema tipo o numero 
			//ser 33, nenhum case tem, entao iria pro default
			default:
				System.out.println("[Default] o n�mero � " + numero);
				break;
			
		}
		
	}

}
