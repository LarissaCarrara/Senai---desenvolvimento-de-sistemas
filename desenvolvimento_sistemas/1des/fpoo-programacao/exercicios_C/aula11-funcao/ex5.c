#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

bool  maior(int num1, int num2);
int n1, n2;

//Crie uma fun��o que compare se dois valores s�o iguais e retorne um booleano.

bool maior(int num1, int num2) {
	
	if(num1==num2){
		
		return true;
	}else{
		
		return false;
	}
		
		
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite dois valores: ");
	scanf("%d %d", &n1, &n2);
	
	maior(n1, n2);
	
	printf("numeros s�o (0= diferentes, 1- iguais): %d", maior(n1,n2));
}
