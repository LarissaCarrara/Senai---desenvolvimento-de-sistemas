#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, soma;
	
	printf("Digite dois n�meros inteiros:\n ");
	scanf("%d %d", &num1, &num2);
	
	soma = num1+ num2;
	
	printf("%d + %d = %d", num1, num2, soma);
}
