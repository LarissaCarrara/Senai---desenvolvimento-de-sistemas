#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	/*Desenvolva um programa que leia a dist�ncia
	entre duas cidades (km) e quantas horas um ve�culo  levou para percorre-la.
	Calcule e apresente na tela a velocidade m�dia (km/h)  deste ve�culo.*/
	
	float raio, altura, area, volume;
	float pi = 3.1415; 
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raio);
	
	printf("Digite a altura do cilindro: ");
	scanf("%f", &altura);
	
	area= 2 * pi * raio *altura;
	volume = pi* (raio*raio)*altura;
	printf("A area do cilindro � de %.2f\nVolume do cilindro %.2f", area, volume);
}
