#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//Desenvolva um programa que leia um n�mero �n� inteiro, positivo e diferente de zero e apresente na tela: n � 1, e tamb�m n + 1.
	
	int n, soma, sub;
	
	printf(" \n\ninforme o n�mero desejado: ");
	scanf("%d", &n);
	
	if( n < 0 || n== 0){
		
		printf(" \n\nN�o foi poss�vel prosseguir, insira um n�mero positivo e diferente de 0. ");
		return 0;
		
	}
	soma = n + 1;
	sub = n - 1;

	
	printf("\n\nO n�mero %d + 1 = %d e %d - 1 = %d", n, soma, n, sub);
}
