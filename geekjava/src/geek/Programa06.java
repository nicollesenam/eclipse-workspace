//instrução switch
package geek;

public class Programa06 {
	public static void main(String[] args) {
		int numero = 3;
		
		//switch tem um valor como parametro no caso o numero
		//e tem os casos; cada case faz uma verificação
		//break é pra sair e n verificar o restante
		switch (numero){
			case 1:
				System.out.println("o número é 1");
				break;
			case 3:
				System.out.println("o número é 3");
				break;
			case 5:
				System.out.println("o número é 5");
				break;
			//valor default é opcional mas serve para aparecer
			//qnd nenhum case resolver o problema tipo o numero 
			//ser 33, nenhum case tem, entao iria pro default
			default:
				System.out.println("[Default] o número é " + numero);
				break;
			
		}
		
	}

}
