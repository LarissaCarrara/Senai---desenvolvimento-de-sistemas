#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>



int n1,n2, ano, idade, nmes, nano;

/*Para participar dos campeonatos os competidores preenchem um formul�rio com sua data de nascimento, 
crie uma fun��o que receba o ano de nascimento e retorne a idade do competidor. */

int converteidade(int nano, int nmes,int mes, int ano) {
	
	idade = nano - ano;
		
		if(nmes>n1){
			
			printf("\nA idade do competidor �: %d", idade);
		}else{
			printf("\nA idade do competidor �: %d", idade-1);
		}
		
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o m�s atual: ");
	scanf("%d", &nmes);
	
	printf("Digite o ano atual: ");
	scanf("%d", &nano);
		
		
	printf("\nDigite o m�s em que o competidor nasceu: ");
	scanf("%d", &n1);
	
	printf("Digite o ano em que o competidor nasceu: ");
	scanf("%d", &n2);
	
	converteidade(nano, nmes,n1, n2);
}
