#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i, n, vetor[15], soma=0;
	
	// Fa�a um programa onde o usu�rio digita 15 valores e imprima a soma destes valores na tela. 
 

	printf("\n  Fa�a um programa onde o usu�rio digita 15 valores e imprima a soma destes valores na tela  ");
	printf("\n\nDigite o n�mero inicial: ");
	
	for(n=0; n<15; n++){
		
		scanf("%d", &vetor[n]);
		
		soma= soma + vetor[n];
	}
	
	
	printf("\n O resultado da soma do intervalo � %d", soma);
	
	

}
