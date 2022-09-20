#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	int i, qtd, n;
	float preco, total=0, dinheiro=0, troco=0;
	
	
		/* O Sr. Manoel Joaquim expandiu seus neg�cios para al�m dos neg�cios de 1,99 e agora possui uma 
	loja de conveni�ncias. Fa�a um programa que implemente uma caixa registradora rudimentar. O programa 
	dever� receber um n�mero desconhecido de valores referentes aos pre�os das mercadorias. Um valor zero 
	deve ser informado pelo operador para indicar o final da compra. O programa deve ent�o mostrar o total da 
	compra e perguntar o valor em dinheiro que o cliente forneceu, para ent�o calcular e mostrar o valor do 
	troco. Ap�s esta opera��o, o programa dever� voltar ao ponto inicial, para registrar a pr�xima compra*/

	do{
	
	
	printf("\n\nDigite os valores dos prudutos (Digite 0 para finalizar a compra): ");
	
	for (i=1;  i > 0; i++){
		
		printf(" \nProduto %d: ", i);
		scanf("%f", &preco);
		
		total = total + preco;
		
		if(preco == 0) break;
	}
	
	printf("\nO total da compra foi de %.2f, digite o valor em dinheiro que ser� fornecido: ", total);
	scanf("%f", &dinheiro);
	

	
	if(total > dinheiro){
		
		
		troco = total - dinheiro;
		
		printf("Dinheiro insuficiente, por favor adicione mais %.2f reais.", troco);
		return 0;
	}
	
	troco = dinheiro - total;
	printf("\nO troco ser� de %.2f reais.", troco);
	
	printf("\n\nDigite 1 para realizar outra conta ou digite 0 para finalizar: ");
	scanf("%d", &n);
	
	system ("cls");
	
}while(n==1);
			
}
