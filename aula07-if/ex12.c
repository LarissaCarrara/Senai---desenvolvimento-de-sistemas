#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
		// Escreva um programa que leia 10 n�meros inteiros e exiba na tela ao final, o maior n�mero que foi digitado pelo usu�rio 
		
	int i, n, maior =0;
	
	//Entrada e Processamento
	
	for(i=0; i<10; i++){
		
		n=-1;
		
		while(n < 0 || n > 32767){
			printf("Digite o %d� n�mero: ",	 i+1);
			
			scanf("%d", &n);				
				
			}
	
		
		
		if(n>maior){
			
			maior=n;
		}
		
		
	}
	


 printf("O maior n�mero digitado foi %d", maior);


	
}
