#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float preco, preconovo;
	
	printf("Desenvolva um programa que leia o pre�o de um produto e se o pre�o for maior do que 1000 reais aplique um desconto de 8%. Mostre o pre�o final. \n");
	
	printf("Digite o pre�o do produto: ");
	scanf("%f", &preco);
	
	if(preco > 1000){
		preconovo= preco - (preco*8/100);
		
		printf("O produto custar� %.2f reais", preconovo);
	}else{
		printf("O produto continuar� custando %.2 reais",preco);
	}
}
