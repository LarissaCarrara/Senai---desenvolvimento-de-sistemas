#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	float area, precogaloes, precolata,litros, qtdlatas, qtdgaloes;

	
		/* Fa�a um Programa para uma loja de tintas. O programa dever� pedir o tamanho em metros
	quadrados da �rea a ser pintada. Considere que a cobertura da tinta � de 1 litro para cada 6 metros
	quadrados e que a tinta � vendida em latas de 18 litros, que custam R$ 80,00 ou em gal�es de 3,6 litros,
	que custam R$ 25,00.Informe ao usu�rio as quantidades de tinta a serem compradas e os respectivos pre�os
	em 2 situa��es:
	a. comprar apenas latas de 18 litros;
	b. comprar apenas gal�es de 3,6 litros*/
	
	printf("Digite o tamanho em metros quadrados da �rea a ser pintada: ");
	scanf("%f", &area);
	
	litros = area/6;
	qtdlatas = ceil(litros/ 18);
	
	precolata= qtdlatas*80;
	qtdgaloes= ceil(litros/3.6);
	precogaloes = qtdgaloes*25;
	
	
	printf(" Quantidade de litros utilizados: %.0f litros\n\n UTILIZANDO LATAS\n quantidade de latas: %.0f\n or�amento das latas: %.0f reais.\n\n UTILIZANDO GAL�ES\n quantidade de gal�es: %.0f \n or�amento dos gal�es: %.0f reais",litros, qtdlatas, precolata, qtdgaloes,precogaloes);
	
	
}
