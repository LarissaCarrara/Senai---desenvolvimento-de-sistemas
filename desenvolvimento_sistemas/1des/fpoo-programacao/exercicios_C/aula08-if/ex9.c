#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	int n=0, tabulacao = 10;
	float reais, preco;
	
	
		/* O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a metodologia da 
	tabelinha, que j� � um sucesso na sua loja de 1,99. Voc� foi contratado para desenvolver o programa que 
	monta a tabela de pre�os de p�es, de 1 at� 50 p�es, a partir do pre�o do p�o informado pelo usu�rio*/
		
	
	printf("Digite o pre�o do p�o: ");
	scanf("%f", &preco);
	
		for (n=1; n<= 50; n++){
		
		reais = n * preco;
		
		printf(" \n%d produto - %.2f reais. ", n, reais);
		
		if(tabulacao== n){
			
			printf("\n");
			tabulacao +=10;
		}
		
	}
}
