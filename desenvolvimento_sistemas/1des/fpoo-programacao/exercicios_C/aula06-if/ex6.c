#include <stdio.h>
#include <locale.h>

int main(){
	
	/*-Desenvolva um programa que leia 6 n�meros inteiros e exiba na tela ao final, o maior n�mero 
que foi digitado pelo usu�riou.  */

	setlocale (LC_ALL, "Portuguese");
	
	
	int num1, num2, num3, num4, num5, num6;
	
	printf("- Desenvolva um programa que leia 6 n�meros inteiros e exiba na tela ao final, o maior n�mero que foi digitado pelo usu�riou."); 
	
	printf("\nInsira o primeiro n�mero: ");
	scanf("%d", &num1);
	
	printf("\nInsira o segundo n�mero: ");
	scanf("%d", &num2);
	
	printf("\nInsira o terceiro n�mers: ");
	scanf("%d", &num3);
	
	printf("\nInsira o quarto n�mero: ");
	scanf("%d", &num4);
	
	printf("\nInsira o quinto n�mero: ");
	scanf("%d", &num5);
	
	printf("\nInsira o sexto n�mero: ");
	scanf("%d", &num6);
	
	if( num1> num2 && num1>num3 && num1>num4 && num1>num5 && num1>num6){
		printf("O maior n�mero � o %d", num1);
	}
	
	if(  num2 > num1 && num2>num3 && num2>num4 && num2>num5 && num2>num6){
		printf("O maior n�mero � o %d", num2);
	}
	
	if(  num3 > num1 && num3>num2 && num3>num4 && num3>num5 && num3>num6){
		printf("O maior n�mero � o %d", num3);
	}
	
	if(  num4 > num1 && num4>num2 && num4>num3 && num4>num5 && num4>num6){
		printf("O maior n�mero � o %d", num4);
	}
	
	if(  num5 > num1 && num5>num2 && num5>num3 && num5>num4 && num5>num6){
		printf("O maior n�mero � o %d", num5);
	}
	if(num6 > num1 && num6>num2 && num6>num3 && num6>num4 && num6>num5)	{
	
		printf("O maior n�mero � o %d", num6);
	}
}
