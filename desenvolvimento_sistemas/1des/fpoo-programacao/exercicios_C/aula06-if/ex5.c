#include <stdio.h>
#include <locale.h>

int main(){
	
	/*- Desenvolva um programa que leia o nome e o pre�o de uma mercadoria. Se o pre�o for menor 
do que 1000 ter� um aumento de 5% no pre�o da mercadoria, sen�o o aumento ser� de 7%. Mostrar o nome da mercadoria e o seu novo pre�o. */

	setlocale (LC_ALL, "Portuguese");
	
	int preco=0 , preconovo=0;
	char nome[15];
	
	printf("- Desenvolva um programa que leia o nome e o pre�o de uma mercadoria. Se o pre�o for menor do que 1000 ter� um aumento de 5% no pre�o da mercadoria, sen�o o aumento ser� de 7%. Mostrar o nome da mercadoria e o seu novo pre�o. ");
	
	printf("\n\nDigite o nome do produto: ");
	scanf("%s", &nome);
	
	printf("\n\nDigite o pre�o do produto: ");
	scanf("%d", &preco);
	
	if(preco <1000){
		
		preconovo= preco * 5/100 + preco;
		
		printf("\n\nO pre�o final do %s ser� de %d reais", nome, preconovo);
	}else{
		preconovo= preco + preco * 7/100;
		printf("\n\nO pre�o final do %s ser� de %d reais", nome, preconovo);
	}	
	
}
