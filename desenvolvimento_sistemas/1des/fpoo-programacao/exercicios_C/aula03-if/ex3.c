#include <stdio.h>
#include <locale.h>


// Desenvolva um programa que leia o nome e o sal�rio de uma pessoa, depois leia o valor do �ndice percentual (%) de reajuste do sal�rio. Calcule e apresente na tela, o valor do novo sal�rio e o nome da pessoa.


int main(){
	
	setlocale(LC_ALL, "Portuguese"); 
	
	char nome;
	float salario, porcent, novosal, porcentagem;
	
	printf("\nDesenvolva um programa que leia o nome e o sal�rio de uma pessoa, depois leia o valor do �ndice percentual (%%) de reajuste do sal�rio. Calcule e apresente na tela, o valor do novo sal�rio e o nome da pessoa.");
	
	
	printf("\n\ndigite seu nome: ");
	scanf("%s", &nome);
	
	printf("\n\ndigite o seu sal�rio atual: ");
	scanf("%f", &salario);
	
	printf("\n\ndigite o �ndice porcentual de reajuste do sal�rio: ");
	scanf("%f", &porcent);
	
	porcentagem = porcent/100;

	novosal = (salario * porcentagem)+ salario;

	printf("\n\nO novo sal�rio ser� de %f" , novosal);
	
	
}
