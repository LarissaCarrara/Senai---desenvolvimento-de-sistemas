
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
setlocale (LC_ALL, "Portuguese");

/* Desenvolva um programa que leia o nome e o pre�o de 5 mercadorias. 
Se o pre�o for menor do que 1000 ter� um aumento de 5% no pre�o da mercadoria, 
sen�o o aumento ser� de 7%. Mostrar o nome das mercadorias e o seu novo pre�o.*/


float preco[20] , total5, total7;
int i;
char produto[5][20];


	for(i=0; i<5; i++){

	printf("\n\nDigite o nome e o pre�o do %i produto ", i+1);
	printf("\nnome: ");
	scanf("%s", &produto[i]);
	printf("pre�o: ");
	scanf("%f", &preco[i]);
	

	}	

	for(i=0; i<5; i++){
		
	
		if(preco[i]>1000){

			total5= preco[i] * 0.05 + preco[i];
			
				printf("\n\nMercadoria: %s \nPre�o anterior: %.2f \nPre�o reajustado: %.2f", produto[i], preco[i], total5);
		}else{
			
			total7= preco[i] * 0.07 + preco[i];
			
				printf("\n\nMercadoria: %s \nPre�o anterior: %.2f \nPre�o reajustado: %.2f", produto[i], preco[i], total7);
		}
		
	
	}



}
