#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	/*Crie um vetor de tamanho 10, permita que o usu�rio o preencha e informe :
	- A soma e m�dia dos pares;
	- A soma e m�dia dos impares;
	- O total de n�meros pares;
	- O total de n�meros impares;*/
	
	int vetor[10], numero, par, impar=0, i , i2, n, media_par, media_impar;
	
	printf("Digite os 10 valores : \n");
	
	for(n=0; n<10; n++){
		
		scanf("%d", &numero);
		
		vetor[n]=numero;
		
		
		if( numero % 2 == 0){
			
			par = par + numero;
			i++;
		}else{
		
			impar= impar + numero;
			i2++;
		}
		
		
	}
	
	
	
	
	
	if(i!=0){
		media_par= par/i;
	
	}
	
	if(i2!=0){
		media_impar= impar/i2;
	}
	
	
	printf(" \nQuantidade de n�meros pares: %d ", i);
	printf(" \nQuantidade de n�meros impares: %d ", i2);
	
	printf(" \n\n Soma dos n�meros pares: %d ", par);	
	printf(" \n Soma dos n�meros impares: %d ", impar);

	
	printf(" \n\n M�dia dos n�meros pares: %d ", media_par);	
	printf(" \n M�dia dos n�meros impares: %d ", media_impar);
}
