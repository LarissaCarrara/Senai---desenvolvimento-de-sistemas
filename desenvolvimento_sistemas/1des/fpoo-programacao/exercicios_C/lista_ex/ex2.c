#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*Fa�a um programa que receba como entrada o nome, a idade e o peso de 5 pessoas 
	e retorne se estas podem ou n�o doar sangue, conforme os crit�rios a seguir: 
	Idade entre 18 e 69 anos e pesar mais do que 50kg. */
	
	char nome[4][15];
	int idade[4], i;
	float peso[4];
	
	for(i=0; i<5; i++){
		printf("Digite o nome da %d� pessoa: ", i+1);
		scanf("%s", &nome[i]);
		
		printf("Digite a idade da %d� pessoa: ", i+1);
		scanf("%d", &idade[i]);	
		
		printf("Digite o peso da %d� pessoa: ", i+1);
		scanf("%f", &peso[i]);	
	}
	

	for(i=0; i<5; i++){
		if(idade[i]>=18 && idade[i]<=69 && peso[i]>50){
			printf("\n\n\tNome: %s\n\tIdade: %d\n\tPeso: %.2f\n\tSitua��o: V�lido como doador", nome[i], idade[i], peso[i]);
		}else{
			printf("\n\n\tNome: %s\n\tIdade: %d\n\tPeso: %.2f\n\tSitua��o: Inv�lido como doador", nome[i], idade[i], peso[i]);
		}
	}				
}
