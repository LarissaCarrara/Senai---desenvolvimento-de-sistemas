#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Um caminh�o consegue transportar 18 toneladas de laranjas em uma viagem que faz entre a fazenda e a f�brica de suco de laranja. Um alqueire de terra produz em m�dia 250 toneladas de laranjas. 
	Fa�a um programa que leia quantos caminh�es e quantos alqueires uma fazenda produtora de laranjas possui, calcule e apresente na tela quantas viagens de caminh�o ser�o necess�rias para transportar 
	toda a colheita de laranjas.*/
	
	float voltas, caminhao, alqueire, qtdalqueire, qtdcaminhao;
	
	
	printf("Informe a quantidade de alqueires que a fazenda possui: ");
	scanf("%f", &alqueire);
	
	printf("Informe a quantidade de caminh�oes que a fazenda possui: ");
	scanf("%f", &caminhao);	
		       
	qtdalqueire= 250 * alqueire;
	qtdcaminhao= 18 * caminhao;
	
	voltas= qtdalqueire/qtdcaminhao;
	
	          
	printf("\n\nO caminhão precisar� dar %.2f voltas", voltas);
}
                                                     
