#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Desenvolva um programa que leia o nome de uma cidade, o n�mero total de eleitores e o n�mero total de votos apurados na �ltima elei��o. O programa dever� calcular e exibir a porcentagem 
	de participa��o dos eleitores desta cidade na �ltima elei��o.*/
	
	float pessoa, eleitores, participacao, qtdvotos;
	char cidade[20];
	
	printf(" \n\ninforme o nome da cidade: ");
	scanf("%s", &cidade);
	
	printf(" \n\ninforme a quantidade total de eleitores: ");
	scanf("%f", &eleitores);
	
	printf(" \n\ninforme a quantidade total de votos: ");
	scanf("%f", &qtdvotos);
	
	
	participacao= (qtdvotos/eleitores) * 100; 


	
	printf("\n\n A participa��o dos eleitores de %s na �ltima elei��o foi de %.1f %%.", cidade, participacao);
}
