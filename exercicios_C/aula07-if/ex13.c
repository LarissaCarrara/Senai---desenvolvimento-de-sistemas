#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	/*Escreva um programa que leia 5 n�meros inteiros em qualquer ordem e exiba na tela ao final,
os cinco n�meros em ordem crescente */

	int a, b, c, d ,e, i;
	int n1, n2, n3, n4, n5, n, menor, maior;
	
	
	for(i=0; i < 5; i++){
	
	n=-1;
	
	while(n < 0 || n>32767){
		
		printf("Digite o %d n�mero" , i+1);
		scanf("%d", &n);
	}
	if(n < menor){
		
		menor=n;	
	}
	
	if(n> maior){
		maior = n;
		
	}
	
	
	if (i==0) a= n;
	if (i==1) a= n;
	if (i==2) a= n;
	if (i==3) a= n;
	if (i==4) a= n;
}

n1= menor;
n5= maior;

printf("%d %d %d %d %d", n1, n2,n3,n4,n5);

//Processamento
}
