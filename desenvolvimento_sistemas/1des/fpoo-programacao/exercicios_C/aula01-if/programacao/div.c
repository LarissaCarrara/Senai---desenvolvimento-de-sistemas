#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese"); 
	
	int a, b, c;
	
	printf("\nREALIZAR DIVIS�O DE DOIS N�MEROS INTEIROS");
	printf("\n\ndigite o primeiro e segundo n�mero: ");
	
	scanf("%d %d", &a, &b);
	
	if (b==0){
		
		printf("\n\nN�o � possivel completar a opera��o, tente novamente!");
		return 0;
	}
	c = a / b;
	
	printf("o valor da divis�o � %d", c);
	
	
}

