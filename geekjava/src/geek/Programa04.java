package geek;

public class Programa04 {

	public static void main(String[] args) {
		//declarando e inicializando a variavel
		int numero = 2;
	
		if(numero > 5) {
			System.out.println("sim, o n�mero " + numero + " � maior que 5");
		}else if (numero == 5) {
			System.out.println("o n�mero " + numero + " � igual a 5");
			//verificando se o n�mero � par
		}else if (numero % 2 == 0) {
			System.out.println("o n�mero " + numero + " � par");
		}else {
			System.out.println("n�o, o n�mero " + numero + " n�o � maior que 5");
		}
//primeiro o else if(senao se) dps o else (senao)

	}

}
