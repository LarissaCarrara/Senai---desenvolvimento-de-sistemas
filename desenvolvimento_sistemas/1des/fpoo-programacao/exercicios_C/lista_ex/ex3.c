#include <stdio.h>
#include <locale.h>

int main(){
	
	/*Faça um programa que receba como entrada o nome, a idade, sexo 
	e quantos dias desde a ultima doação de uma pessoa e retorne se esta pode 
	ou não doar sangue, conforme os critérios a seguir: Idade entre 18 e 69 anos
	 se homem intervalo de 60 dias, se mulher 90 dias. */
	 
	 char nome[15];
	 int idade, sexo, tempo; 
	 setlocale(LC_ALL,"Portuguese");
	 
	  printf("Digite o seu nome: ");
	  scanf("%s", &nome);
	  
	  printf("Digite o seu sexo (1- homem, 2-mulher): ");
	  scanf("%d", &sexo);
	  
	  printf("Digite a sua idade: ");
	  scanf("%d", &idade);
	  
	  printf("Digite a sua ultima doa��o (em dias): ");
	  scanf("%d", &tempo);
	  
	  if(sexo == 1){
	  	if(tempo >= 60 && idade >= 18 && idade <= 69){
	  		printf("\n%s est� v�lido para doar.", nome);
		  }else{
		  	printf("\n%s n�o est� v�lido para doar, pois precisa ter idade entre 18 e 69 anos e ter um intervalo de doa��o de 60 dias",nome);
		  }
	  }else if(sexo==2){
	  	if(tempo>= 90 && idade>=18 && idade <=69){
	  		printf("\n%s est� v�lido para doar.", nome);
		  }else{
		  	printf("\n%s n�o est� v�lido para doar, pois precisa ter idade entre 18 e 69 anos e ter um intervalo de doa��o de 90 dias",nome);
		  }
	  }else{
	  	printf("Digite um n�mero v�lido (1- homem e 2-mulher).");
	  }
}
