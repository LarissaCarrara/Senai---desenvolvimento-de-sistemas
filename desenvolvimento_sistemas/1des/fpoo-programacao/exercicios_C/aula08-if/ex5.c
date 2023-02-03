#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	int a, b,c, delta, raiz1, raiz2,resultdelta;

	
		/* Fa�a um programa que calcule as ra�zes de uma equa��o do segundo grau, na forma ax2 + bx + c.
	O programa dever� pedir os valores de a, b e c e fazer as consist�ncias, informando ao usu�rio nas seguintes
	situa��es:
	� Se o usu�rio informar o valor de A igual a zero, a equa��o n�o � do segundo grau e o
	programa n�o deve fazer pedir os demais valores, sendo encerrado;
	� Se o delta calculado for negativo, a equa��o n�o possui raizes reais. Informe ao usu�rio e
	encerre o programa;
	� Se o delta calculado for igual a zero a equa��o possui apenas uma raiz real; informe-a ao
	usu�rio;
	� Se o delta for positivo, a equa��o possui duas raiz reais; informe-as ao usu�rio;	*/
	
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	
	if(a==0){
		printf("\nA igual a zero, a equa��o n�o � do segundo grau.");
		return 0;
	}	
	
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	
	delta = (b*b) - 4 * a * c;
	
	if(delta<0){
		printf("\nO delta calculado � negativo, a equa��o n�o possui raizes reais.");
		return 0;
	}
	
	if(delta==0){
		printf("O delta calculado � igual a zero, a equa��o possui apenas uma raiz real.");
		
		raiz1= (-b + resultdelta)/2*a;
			printf("A raiz da equac�o �: %d", raiz1);	
			return 0;	
	}
	
	resultdelta= sqrt(delta);
	
	raiz1= (-b + resultdelta)/2*a;
	raiz2= (b+resultdelta)/2*a;
	
	printf("As ra�zes da equa��o s�o: %d e %d", raiz1, raiz2);
	
}
