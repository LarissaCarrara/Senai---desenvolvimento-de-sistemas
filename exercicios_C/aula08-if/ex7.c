#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	int n1,n2,n3,n4,n5, n=0;

	
		/* Fa�a um programa que fa�a 5 perguntas para uma pessoa sobre um crime. As perguntas s�o:
	a. "Telefonou para a v�tima?"
	b. "Esteve no local do crime?"
	c. "Mora perto da v�tima?"
	d. "Devia para a v�tima?"
	e. "J� trabalhou com a v�tima?"
	O programa deve no final emitir uma classifica��o sobre a participa��o da pessoa no crime. Se a
	pessoa responder positivamente a 2 quest�es ela deve ser classificada como "Suspeita", entre 3 e 4
	como "C�mplice" e 5 como "Assassino". Caso contr�rio, ele ser� classificado como "Inocente".	*/
	
	
	printf("Telefonou para a v�tima? (1-sim, 2-n�o): ");
	scanf("%d", &n1);
	
	if(n1 == 1){
		
		n++;	
	}
	
	printf("Esteve no local do crime? (1-sim, 2-n�o): ");
	scanf("%d", &n2);
	
	if(n2 == 1){
		n++;
	}
	
	printf("Mora perto da v�tima? (1-sim, 2-n�o): ");
	scanf("%d", &n3);
	
	if(n3 == 1){
		n++;
	}
	
	printf("Devia para a v�tima? (1-sim, 2-n�o): ");
	scanf("%d", &n4);
	
	if(n4 == 1){
		n++;
	}
	
	printf("J� trabalhou com a v�tima? (1-sim, 2-n�o): ");
	scanf("%d", &n5);
	
	if(n5 == 1){
		n++;
		
	}
	
	
	if(n==1){
		printf("\n\nVoc� foi considerado inocente");
		
	}else if(n==2){
		printf("\n\nVoc� foi considerado suspeito(a)");
		
	}else if(n==3 || n==4){
		printf("\n\nVoc� foi considerado c�mplice");
		
	}else if(n==5){
			printf("\n\nVoc� foi considerado assasino(a)");
	}

}
