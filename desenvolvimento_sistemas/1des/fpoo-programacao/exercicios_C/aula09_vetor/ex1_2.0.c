#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	/*Crie dois vetores num�ricos de dimens�o 5 com valores informados pelo usu�rio.
Apresente a soma do primeiro vetor com o inverso do segundo.*/
	
	int vetor[10], soma=0, n=0;
	
	printf("Digite os 10 valores referente ao primeiro vetor: \n");
	
	for(n=0; n<10; n++){
		
		scanf("%d", &vetor[n]);
		
		
	}
		
	
	
	for(n=0; n<5; n++){
		
		
		
		
		
		
			soma = vetor[n] + vetor[9-n];
		
		
		
	
		printf("\n\nO valor do %d com o %d � de %d", vetor[n], vetor[9-n], soma);
	
	}
}

