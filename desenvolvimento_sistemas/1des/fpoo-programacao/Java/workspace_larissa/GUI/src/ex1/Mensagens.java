package ex1;

import javax.swing.JOptionPane;

public class Mensagens {

	public static void main(String[] args) {
		
		System.out.println("Teste");
		
		String texto = JOptionPane.showInputDialog("Digite seu nome completo: "); //entrada
		String nomes[] = texto.split(" ");
		texto="Seu primeiro nome possue " +nomes[0].length() + " letras\n";
		texto="Seu ultimo nome possue " +nomes[nomes.length-1].length() + " letras\n";
		if(nomes.length > 2) {
			texto +="Seu nome do meio possui "+nomes[1].length() + " letras";
		}else {
			texto+= "Você nao possui nome do meio";
		}
		JOptionPane.showMessageDialog(null, texto); //saida
	}

}
