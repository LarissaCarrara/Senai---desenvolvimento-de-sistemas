#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	float salario, ajuste, nvsalario;

	
		/* As Organiza��es Tabajara resolveram dar um aumento de sal�rio aos seus colaboradores e lhe
	contrataram para desenvolver o programa que calcular� os reajustes. Fa�a um programa que recebe o
	sal�rio de um colaborador e o reajuste segundo o seguinte crit�rio, baseado no sal�rio atual:
	o sal�rios at� R$ 280,00 (incluindo) : aumento de 20%
	o sal�rios entre R$ 280,00 e R$ 700,00 : aumento de 15%
	o sal�rios entre R$ 700,00 e R$ 1500,00 : aumento de 10%
	o sal�rios de R$ 1500,00 em diante : aumento de 5%
	� Ap�s o aumento ser realizado, informe na tela:
	o o sal�rio antes do reajuste;
	o o percentual de aumento aplicado;
	o o valor do aumento;
	o o novo sal�rio, ap�s o aumento.
	*/
	
	
	printf("Digite o seu sal�rio: ");
	scanf("%f", &salario);
	
	if(salario<= 280){
		
		ajuste = salario * 20/100;
		nvsalario= salario + ajuste;
		
		printf("\n\nsal�rio anterior: %.2f\n Porcentual aplicado : 20%%\n Valor do aumento: %.2f\n Novo sal�rio: %.2f", salario, ajuste, nvsalario);
		
	}else if( 281< salario && salario <=700){
		
		ajuste = salario * 15/100;
		nvsalario= salario + ajuste;
		
		printf("\n\nsal�rio anterior: %.2f\n Porcentual aplicado : 15%%\n Valor do aumento: %.2f\n Novo sal�rio: %.2f", salario, ajuste, nvsalario);
		
	}else if(701<salario && salario <= 1500){
		
		ajuste = salario * 10/100;
		nvsalario= salario + ajuste;
		
		printf("\n\nsal�rio anterior: %.2f\n Porcentual aplicado : 10%%\n Valor do aumento: %.2f\n Novo sal�rio: %.2f", salario, ajuste, nvsalario);
		
	}else if(salario > 1501){
		
		ajuste = salario * 5/100;
		nvsalario= salario + ajuste;
		
		printf("\n\nsal�rio anterior: %.2f\n Porcentual aplicado : 5%%\n Valor do aumento: %.2f\n Novo sal�rio: %.2f", salario, ajuste, nvsalario);
	}
	
	
}

