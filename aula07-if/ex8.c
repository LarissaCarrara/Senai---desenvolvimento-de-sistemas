#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i,n=0, n1, n2,x,y;
	
	// Fa�a um programa que imprima na tela a soma dos valores de um intervalo definido pelo usu�rio. 
 

	printf("\n  Fa�a um programa que imprima na tela a soma dos valores de um intervalo definido pelo usu�rio.   ");
	printf("\n\nDigite o n�mero inicial: ");
	scanf("%d", &n1);
	
	printf("\nDigite o n�mero final: ");
	scanf("%d", &n2);

	x = n1;
	y= n2;

	if(n1>n2){
	n2= x;
	n1= y;	

	}


	if(n2< 32767){

		if(n1 % 2 != 0){
		
		n1++;
		
 	}
 }
 	
	for ( i= n1; i<=n2; i+=2){
		n= n + i;
		
	}  
	
	printf("\n O resultado da soma dos n�meros pares do intervalo � %d", n);

}
