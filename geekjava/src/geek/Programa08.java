//do while
package geek;
import java.util.Scanner;

//receba dados do usuario enquanto a idade for maior q 0

public class Programa08 {
	public static void main(String[] args) {
		
		int idade = 1;
		String nome;
		
		//para receber dados do usuario via teclado
		Scanner teclado = new Scanner(System.in);
		
		//primeiro executa o bloco dps faz a checagem
		do {
			System.out.println("informe seu nome: ");
			nome = teclado.nextLine();
			//next line � pra receber dados do tipo string 
			//so o next tamb�m recebe dados tipo string mas so um nome sem espa�o
		
			System.out.println("informe sua idade: ");
			//idade = teclado.nextInt(); // bug
			//next int � a fun��o pra receber dados do tipo inteiro
			idade = Integer.parseInt(teclado.nextLine());
			//                   |           recebe string
			    //e converte pra um inteiro
			
			if(idade > 0) {
				System.out.println(nome + " tem " + idade + " anos");
			}
		}while (idade > 0);
		teclado.close();
	}

}