#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *converterbinario(int decimal);
int decimal, resto, binario[99], n1, n, i;

//Crie uma fun��o que receba um n�mero decimal e imprima sua representa��o em bin�rio.

int *converterbinario(int decimal) {
	
	while(decimal!= 0){
		
		resto = decimal%2;
		decimal = decimal/2;
		
		if(resto == 0){
			binario[i]= 0;
		}else if(resto == 1){
			binario[i]=1;
		}
		
		i++;
	}
	
	for (n=i; n>=0; n--){
		
			printf("[%d]", binario[n]);
	}
}

int main(){
	
	printf("Digite um n�mero que deseja que seja convertido em bin�rio: ");
	scanf("%d", &n1);
	
	converterbinario(n1);
}
