#include <stdio.h>
#include <locale.h>

int main(){
	
	/*- Desenvolva um programa que leia o sal�rio de um funcion�rio e o n�mero de filhos. Se o sal�rio 
for menor do que 2000 o funcion�rio receber� um sal�rio fam�lia equivalente a 45 reais por filho.
Apresente o sal�rio final. */

	setlocale (LC_ALL, "Portuguese");
	
	int salario, filhos, salarioNovo;
	
	printf("- Desenvolva um programa que leia o sal�rio de um funcion�rio e o n�mero de filhos. Se o sal�rio for menor do que 2000 o funcion�rio receber� um sal�rio fam�lia equivalente a 45 reais por filho.Apresente o sal�rio final. ");
	
	printf("\n\nInsira seu sal�rio: ");
	scanf("%d", &salario);
	
	printf("\n\nInsira quantos filhos possui: ");
	scanf("%d", &filhos);
	
	
	if(salario <2000){
		
		salarioNovo= filhos * 45 + salario;
		
		printf("\n\nSeu sal�rio final ser� de %d reais", salarioNovo);
	}else{
		
		printf("\n\nSeu sal�rio continuar� sendo de %d reais", salario);
	}	
	
}
