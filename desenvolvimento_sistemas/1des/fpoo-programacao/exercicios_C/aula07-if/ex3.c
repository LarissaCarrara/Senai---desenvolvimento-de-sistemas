#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,n=0;
	
	/* Fa�a um programa onde o usu�rio digite um valor, e imprima na tela todos os valores entre 0 e o
valor digitado */

	printf("\nFa�a um programa onde o usu�rio digite um valor, e imprima na tela todos os valores entre 0 e o valor digitado ");
	printf("\nDigite o n�mero desejado: ");
	scanf("%d", &n);


	if(n< 32767){
		
		for ( i= 0; i<=n; i++){
		
		printf("\n %d", i);
	} 
	
	}
	

}
