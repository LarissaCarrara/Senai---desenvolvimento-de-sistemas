#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Desenvolva um programa que leia o nome e o pre�o de uma mercadoria. O programa dever� calcular um aumento de 5% no pre�o da mercadoria e mostrar o nome da mercadoria e o seu novo pre�o.
	
	float preco, novopreco;
	char mercadoria[20];
	
	printf(" \n\ninforme o nome da mercadoria: ");
	scanf("%s", &mercadoria);
	
	printf(" \n\ninforme o pre�o da mercadoria: ");
	scanf("%f", &preco);
	
	
	novopreco= preco * 0.05 + preco;


	
	printf("\n\n Mercadoria: %s\n Novo pre�o: %.2f", mercadoria, novopreco);
}
