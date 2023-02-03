#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	float peso, excesso, multa;
	
		/* Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento
	di�rio de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo
	regulamento de pesca do estado de S�o Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo
	excedente. Jo�o precisa que voc� fa�a um programa que leia a vari�vel peso (peso de peixes) e calcule
	o excesso. Gravar na vari�vel excesso a quantidade de quilos al�m do limite e na vari�vel multa o valor
	da multa que Jo�o dever� pagar. Imprima os dados do programa com as mensagens adequadas.*/

 printf("Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento di�rio de seu trabalho. \nToda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo\n (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. Jo�o precisa que voc� fa�a um programa que leia\n a vari�vel peso (peso de peixes) e calcule o excesso. Gravar na vari�vel excesso a quantidade de quilos al�m do limite\n e na vari�vel multa o valor da multa que Jo�o dever� pagar. Imprima os dados do programa com as mensagens adequadas.");
 printf("\n\n\nDigite o peso do peixe: ");
 scanf("%fd", &peso);
 
 if(peso ==0 || peso <0){
 	
 		printf("\n\nDigite um peso v�lido!");
 		return 0;
 }
 
 if(peso > 50){
 	
 	excesso = peso - 50;
 	
 	multa = excesso * 4;
 	
 	printf("O peixe possui o excesso de %.2fkg, a multa aplicada ser� de %.2f reais.", excesso, multa);
 	
 }else{
 	
 	printf( "O peixe pesa abaixo ou igual a 50kg e por isso, n�o tomar� multa.");
 }
 
}
