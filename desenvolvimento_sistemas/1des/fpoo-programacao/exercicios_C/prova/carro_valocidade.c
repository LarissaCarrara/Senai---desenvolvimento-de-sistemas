#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	/*Desenvolva um programa que leia a dist�ncia
	entre duas cidades (km) e quantas horas um ve�culo  levou para percorre-la.
	Calcule e apresente na tela a velocidade m�dia (km/h)  deste ve�culo.*/
	
	float km, tempo, velocidade; 
	printf("Digite a dist�ncia entre as duas cidades (km): ");
	scanf("%f", &km);
	
	printf("Digite quantas horas um ve�culo levou para percorre-la: ");
	scanf("%f", &tempo);
	
	velocidade = km/tempo;
	printf("A velocidade m�dia do carro foi de %.1fm/s", velocidade);
}
