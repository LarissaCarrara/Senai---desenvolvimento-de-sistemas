#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,n1,n2, x, y;
	
	/*  Fa�a um programa onde o usu�rio digite dois valores, e imprima na tela todos os valores no intervalo entre os valores digitados. */

	printf("\n Fa�a um programa onde o usu�rio digite dois valores, e imprima na tela todos os valores no intervalo entre os valores digitados.  ");
	printf("\n\nDigite os dois n�meros: ");
	scanf("%d %d", &n1, &n2);
	

	x = n1;
	y= n2;

	if(n1>n2){
	n2= x;
	n1= y;	

	}


	if(n2< 32767){
		for ( i= n1; i<=n2; i++){
			
			printf("\n %d", i);
		} 
		
	}
}
