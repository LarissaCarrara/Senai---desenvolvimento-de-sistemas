#include <stdio.h>
#include <locale.h>
#include <time.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	/*Localize um valor informado pelo usu�rio dentro de um vetor com dimens�o 10;*/
	
	int n, numero, i=0, vetor[50], aux, igual; //vetor[10]= {0,1,2,3,4,5,6,7,8,9};
	
	for(n=0; n<50; n++){
		
		aux=rand() % 60 ;	
		igual=0;
				for(n=0; n<i; n++){
					
					if( vetor[n] == aux){
					igual = 1;
					
					}
				}
						
				if(igual==0){
					vetor[i]= aux;
					i++;
				}	
		
	}
	
	i=0;
	printf("\n\nDigite um valor entre 0 a 60 : \n");
	scanf("%d", &numero);
	/*
	if(numero>9){
		
		printf("N�mero inexistente no vetor, digite um n�mero de 0 a 9.");
		return 0;
	}*/
	
	for( n=0 ; n<=50; n++){
		
		if( numero == vetor[n]){
			
			printf("\nO n�mero est� na posi��o %d do vetor.", n);
			i++;
			
			break;
			
		}
	}
	
	if(i==0){
		printf("N�mero inexistente no vetor, digite um n�mero de 0 a 9.");
		return 0;
	}
}
