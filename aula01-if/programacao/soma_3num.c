#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese"); 
	
	int a, b, c, d;
	printf("\nREALIZAR SOMA DE TR�S N�MEROS INTEIROS");
	printf("\n\ndigite o primeiro e segundo n�mero: ");
	
	scanf("%d %d %d", &a, &b, &d);
	
	c = a + b + d;
	
	printf("o valor da soma � %d", c);
	
	
}

