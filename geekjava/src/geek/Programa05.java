//operdor ternario
package geek;

public class Programa05 {
	
	//digitar main + ctrl + barra d espa�o e dar enter para 
	//aparecer o public static
	public static void main(String[] args) {
		int valor = -3, numero;
		/*
		if(valor > 0) {
			numero = valor;
		}else {
			numero = 7;
		}
		*/
		//operador ternario
		//se o valor for maior q 0 o numero vai ser igual ao valor
		//numero = valor � maior que zero? se n�o valor = 7
		numero = (valor > 0) ? valor : 7;
		
		
		//sysout + ctrl + barra de espa�o
		System.out.println(numero);
		
	}

}
