#include <stdio.h>
#include <locale.h>

int main(){
	
	/*- - Desenvolva um programa que leia os valores de tr�s lados de um tri�ngulo (a, b e c) e se os tr�s 
lados forem diferentes escreva ESCALENO se os tr�s lados forem iguais EQUIL�TERO e se apenas dois lados forem iguais IS�SCELE */

	setlocale (LC_ALL, "Portuguese");
	
	int lado1,lado2,lado3;
	
	printf("- - Desenvolva um programa que leia os valores de tr�s lados de um tri�ngulo (a, b e c) e se os tr�s lados forem diferentes escreva ESCALENO se os tr�s lados forem iguais EQUIL�TERO e se apenas dois lados forem iguais IS�SCELES ");
	
	printf("\n\nInsira o primeiro lado do tri�ngulo: ");
	scanf("%d", &lado1);
	
	printf("\n\nInsira o segundo lado do tri�ngulo: ");
	scanf("%d", &lado2);
	
	printf("\n\nInsira o terceiro lado do tri�ngulo: ");
	scanf("%d", &lado3);
	
	if(lado1==lado2 && lado1==lado3){
		
		printf("\n\n� um tri�ngulo equil�tero");
		return 0;
		
	}else if(lado1==lado2){
	
		
		printf("\n\n� um tri�ngulo is�celes");
		return 0;
		
	}if(lado2==lado3){
		printf("\n\n� um tri�ngulo is�celes");
		return 0;
		
	}else if( lado1== lado3){
		printf("\n\n� um tri�ngulo is�celes");
		return 0;
		
	}if(lado1 != lado2 != lado3){
		printf("\n\n� um tri�ngulo escaleno");
	}
	
}
