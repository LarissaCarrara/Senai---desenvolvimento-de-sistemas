#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){

setlocale (LC_ALL, "Portuguese");

/* Desenvolva um programa que leia o nome de uma cidade, 
o n�mero total de eleitores e o n�mero total de votos apurados na �ltima elei��o. 
O programa dever� calcular e exibir a porcentagem de participa��o dos eleitores 
desta cidade na �ltima elei��o e fazer isso para 5 cidades.*/
	
	int numeleitores[20], numtotal[20], i, porcentagem;
	char cidade[5][20];
	
	
	for(i=0; i<5; i++){

		printf("\n\n %d cidade:  ", i+1);
		printf("\nnome: ");
		scanf("%s", &cidade[i]);
		printf("\nn�mero total de eleitores: ");
		scanf("%d", &numtotal[i]);
		printf("\nn�mero total de votos apurados na �ltima elei��o: ");
		scanf("%d", &numeleitores[i]);
		
	}	
	
	for(i=0; i<5; i++){
		
		porcentagem = (float)(numeleitores[i]*100)/ numtotal[i]; 
		
		printf(" \nCidade %d - %s \n porcentagem de participa��o: %d %%.", i+1,cidade[i] , porcentagem);
	}
}
