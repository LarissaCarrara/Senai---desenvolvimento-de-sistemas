#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){

setlocale (LC_ALL, "Portuguese");

/* Desenvolva um programa que leia o nome e o pre�o de 10 mercadorias, 
depois leia o valor do �ndice percentual (%) de desconto no pre�o da mercadoria. 
Calcule e apresente na tela, o nome, o pre�o original, o valor do desconto e 
pre�o final de cada mercadoria com desconto.*/

int percent[10], preco[20], n;
float desconto, precofinal;
char mercadoria[20][20];


	for(n=0; n<10; n++){
		
		printf("\n\n %d produto ", n+1);
		printf("\nmercadoria: ");
		scanf("%s", &mercadoria[n]);
		printf("\npre�o da mercadoria: ");
		scanf("%d", &preco[n]);	
		printf("\n�ndice percentual da mercadoria: ");
		scanf("%d", &percent[n]);
		
		desconto= preco[n] * (float)percent[n]/100;
		precofinal = preco[n] - desconto;
		
		printf("\n\nMercadoria: %s\n Pre�o original: %d\n Valor do desconto: %.2f\n Pre�o com desconto: %.2f", mercadoria[n],preco[n], desconto, precofinal);
			
		
	}
	
}
	
	
	
