#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	//Fa�a um programa que receba o nome e o sal�rio de 1 pessoa e calcule o FGTS.
	
	char nome[10];
	float salario, fgts;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	fgts = salario - salario * 0.08;
	
	printf("\nO salario fial ser� de %.2f reais.",fgts);
}
