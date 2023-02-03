#include <stdio.h>
#include <locale.h>

int main(){
	
	/*-Desenvolva um programa que calcule desconto de INSS de um funcion�rio, se o sal�rio for menor ou igual a do que R$ 1212,00 reais ser� de 7,5%, se estiver entre R$ 1212,01 e 2427,35 ser� 
de 9%, se estiver entre R$ 2427,36 e R$ 3641,03 o desconto � 12%, se estiver entre R$ 3641,04 a R$ 
7087,22 ser� de 14% e se for maior do que 7087,22 o teto que � o m�ximo cobrado 14% de 7087,22. 
Mostre o desconto e o valor do sal�rio final. */

	setlocale (LC_ALL, "Portuguese");
	
	float salario, salarionovo;
	
	printf("- Desenvolva um programa que calcule desconto de INSS de um funcion�rio, se o sal�rio for menor ou igual a do que R$ 1212,00 reais ser� de 7,5%, se estiver entre R$ 1212,01 e 2427,35 ser� de 9%, se estiver entre R$ 2427,36 e R$ 3641,03 o desconto � 12%, se estiver entre R$ 3641,04 a R$ 7087,22 ser� de 14% e se for maior do que 7087,22 o teto que � o m�ximo cobrado 14% de 7087,22. Mostre o desconto e o valor do sal�rio final."); 
	printf("\n\nInsira seu sal�rio: ");
	scanf("%f", &salario);
	
	
	if(salario <=1212){
		
		salarionovo= salario - 7.5/100 * salario;
		
		printf("\n\nSeu sal�rio final ser� de %.2f reais", salarionovo);
		return 0;
		
	}else if( salario <= 2427.35){
		
		salarionovo= salario - (double) 9/100 * salario;
		
		printf("\n\nSeu sal�rio final ser� de %.2f reais", salarionovo);
		return 0;
		
	}if(2427.36 <= salario <= 3641.03){
		
		salarionovo= salario - (double) 12/100 * salario;
		printf("\n\nSeu sal�rio final ser� de %.2f reais", salarionovo);
		
		return 0;
		
	}else if( salario <= 7087.22){
		
		salarionovo= salario - (double) 14/100 * salario;
		
		printf("\n\nSeu sal�rio final ser� de %.2f reais", salarionovo);
	}
	
}
