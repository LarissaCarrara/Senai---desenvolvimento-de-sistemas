#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){

setlocale (LC_ALL, "Portuguese");

srand(time(NULL));

/* Preencha uma matriz 5x5 com valores aleat�rios entre 0 e 50. 
Depois exiba os numeros pares e impares existentes na matriz, e suas quantidades.
*/

int matriz[5][5], par[5][5], impar[5][5], n,i, qtdpar, qtdimp;

	for(n=0; n<5; n++){
		
		for(i=0; i<5; i++){
			
			matriz[n][i]=rand() % 50;
			
		}
	}

	
	for(n=0; n<5; n++){
		for(i=0; i<5; i++){
    		
    		printf("matriz[%d][%d]= %d  ", n, i,matriz[n][i]);
    		if(i==4){
    			
    			printf("\n");
			}
		}
	}
	
	for(n=0; n<5; n++){
		
		for(i=0; i<5; i++){
		
			if( matriz[n][i]%2==0){
				qtdpar++;
			//	par[n][i]= matriz[n][i];
				printf("\nN�meros pares: %d", matriz [n][i]);
			}else{
				qtdimp++;
				//impar[n][i]=matriz[n][i];
				printf("\nN�meros impares: %d", matriz [n][i]);
			}
			
		}
	}
		
	printf("\n\nQuantidade de n�meros pares totais: %d", qtdpar);
	printf("\n\nQuantidade de n�meros impares totais: %d", qtdimp);	
}
