package geek;

public class Programa04 {

	public static void main(String[] args) {
		//declarando e inicializando a variavel
		int numero = 2;
	
		if(numero > 5) {
			System.out.println("sim, o número " + numero + " é maior que 5");
		}else if (numero == 5) {
			System.out.println("o número " + numero + " é igual a 5");
			//verificando se o número é par
		}else if (numero % 2 == 0) {
			System.out.println("o número " + numero + " é par");
		}else {
			System.out.println("não, o número " + numero + " não é maior que 5");
		}
//primeiro o else if(senao se) dps o else (senao)

	}

}
