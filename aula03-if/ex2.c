#include <stdio.h>
#include <locale.h>


// Desenvolva um programa que leia a velocidade de um carro (km/h) e a dist�ncia a ser percorrida (km) por ele. Calcule e apresente na tela, quanto tempo (horas) ser� necess�rio para o carro percorrer a dist�ncia informada.


int main(){
	
	setlocale(LC_ALL, "Portuguese"); 
	
	int velo, dist;
	double temp;
	
	printf("\nDesenvolva um programa que leia a velocidade de um carro (km/h) e a dist�ncia a ser percorrida (km) por ele. Calcule e apresente na tela, quanto tempo (horas) ser� necess�rio para o carro percorrer a dist�ncia informada.");
	
	
	printf("\n\ndigite a velocidade do carro (km/h): ");
	scanf("%d", &velo);
	
	printf("\n\ndigite a dist�ncia percorrida pelo carro (km): ");
	scanf("%d", &dist);

	
	temp = dist/velo;

	printf("\n\nO carro levar� %.2f hora(s) para percorrer %dkm", temp, dist);
	
	
}
