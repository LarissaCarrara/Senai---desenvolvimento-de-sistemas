#include <stdio.h>
#include <locale.h>

int main(){
	
	int n, x;
	int a, b, c, result; //ex1
	int velo, dist; double temp; //ex2
	char nome; float salario, porcent, novosal, porcentagem; //ex3
	char time[15]; int vit, emp, total; //ex4
	int num, soma, sub; //ex5
	float tempo,distancia; //ex6
	float voltas, caminhao, alqueire, qtdalqueire, qtdcaminhao; //ex7
	float raio, altura, areatotal, arealateral, volume, comprimento; //ex8
	float preco, novopreco;	char mercadoria[20]; //ex9
	float pessoa, eleitores, participacao, qtdvotos; char cidade[20]; //ex10
	
	
	
	
		setlocale(LC_ALL, "Portuguese");
	
	do{

		printf("Escolha um n�mero de 1 � 10, para selecionar o exerc�cio desejado, sendo eles:\n\n 1- Desenvolva um programa que leia tr�s vari�veis (a, b, c) e resolva a express�o: ( a + b ) / c.\n\n 2- Desenvolva um programa que leia a velocidade de um carro (km/h) e a dist�ncia a ser percorrida (km) por ele. Calcule e apresente na tela, quanto tempo (horas) ser� necess�rio para o carro percorrer a dist�ncia informada.\n\n 3- Desenvolva um programa que leia o nome e o sal�rio de uma pessoa, depois leia o valor do �ndice percentual (%) de reajuste do sal�rio. Calcule e apresente na tela, o valor do novo sal�rio e o nome da pessoa.\n\n 4- Desenvolva um programa que leia o nome de um time de futebol, o n�mero de vit�rias e o n�mero de empates. O programa dever� calcular e apresentar na tela, o nome do time e o total de pontos. Lembrando que a vit�ria vale 3 pontos e o empate vale 1 ponto.\n\n 5- Desenvolva um programa que leia um n�mero �n� inteiro, positivo e diferente de zero e apresente na tela: n � 1, e tamb�m n + 1.\n\n 6- Sabendo-se que a velocidade de cruzeiro de um avi�o 747-300 � de 900 km/h, fa�a um programa que leia uma dist�ncia (km), calcule e apresente na tela, quanto tempo (horas) ser� necess�rio para um 747-300 sobrevoar a dist�ncia informada.\n\n 7- Um caminh�o consegue transportar 18 toneladas de laranjas em uma viagem que faz entre a fazenda e a f�brica de suco de laranja. Um alqueire de terra produz em m�dia 250 toneladas de laranjas. Fa�a um programa que leia quantos caminh�es e quantos alqueires uma fazenda produtora de laranjas possui, calcule e apresente na tela quantas viagens de caminh�o ser�o necess�rias para transportar toda a colheita de laranjas.\n\n 8- Desenvolva um programa que leia o raio (cm) e a altura (cm) de um cilindro. Calcule e mostre a �rea (cm2) e o volume (cm3) do cilindro.\n\n 9- Desenvolva um programa que leia o nome e o pre�o de uma mercadoria. O programa dever� calcular um aumento de 5%% no pre�o da mercadoria e mostrar o nome da mercadoria e o seu novo pre�o.\n\n 10- Desenvolva um programa que leia o nome de uma cidade, o n�mero total de eleitores e o n�mero total de votos apurados na �ltima elei��o. O programa dever� calcular e exibir a porcentagem de participa��o dos eleitores desta cidade na �ltima elei��o.\n\n Digite o n�mero escolhido (Digite 0 para finalizar o programa):  ");
		scanf( "%d", &n);
		
		system("cls");
	
		switch (n){
		
			case 1:
			    
			    //int a, b, c, result;
					printf("\nDesenvolva um programa que leia tr�s vari�veis (a, b, c) e resolva a express�o: ( a + b ) / c.");
					
					
					printf("\n\ndigite o valor de a: ");
					scanf("%d", &a);
					
					printf("\n\ndigite o valor de b: ");
					scanf("%d", &b);
					
					printf("\n\ndigite o valor de c: ");
					scanf("%d", &c);
					
					result = (a + b) /c;
					
					printf("\n\nO resultado da opera��o � de %d", result);
			    
				break;
			case 2:
				
			   // int velo, dist;
				//double temp;
			    	printf("\nDesenvolva um programa que leia a velocidade de um carro (km/h) e a dist�ncia a ser percorrida (km) por ele. Calcule e apresente na tela, quanto tempo (horas) ser� necess�rio para o carro percorrer a dist�ncia informada.");
	
	
					printf("\n\ndigite a velocidade do carro (km/h): ");
					scanf("%d", &velo);
					
					printf("\n\ndigite a dist�ncia percorrida pelo carro (km): ");
					scanf("%d", &dist);
				
					
					temp = dist/velo;
				
					printf("\n\nO carro levar� %.2f hora(s) para percorrer %dkm", temp, dist);
			    
				break;
			
			case 3:
			    
			    	//char nome;
					//float salario, porcent, novosal, porcentagem;
					
					printf("\nDesenvolva um programa que leia o nome e o sal�rio de uma pessoa, depois leia o valor do �ndice percentual (%%) de reajuste do sal�rio. Calcule e apresente na tela, o valor do novo sal�rio e o nome da pessoa.");
					
					
					printf("\n\ndigite seu nome: ");
					scanf("%s", &nome);
					
					printf("\n\ndigite o seu sal�rio atual: ");
					scanf("%f", &salario);
					
					printf("\n\ndigite o �ndice porcentual de reajuste do sal�rio: ");
					scanf("%f", &porcent);
					
					porcentagem = porcent/100;
				
					novosal = (salario * porcentagem)+ salario;
				
					printf("\n\nO novo sal�rio ser� de %f" , novosal);
			    
				break;
			case 4:
			    
			    //char time;
				//int vit, emp, total;
				
				printf("Desenvolva um programa que leia o nome de um time de futebol, o n�mero de vit�rias e o n�mero de empates. O programa dever� calcular e apresentar na tela, o nome do time e o total de pontos. Lembrando que a vit�ria vale 3 pontos e o empate vale 1 ponto.");
				printf(" \n\nEscreva o nome do time:");
				scanf("%s", &time);
				
				printf("\n\nInforme a quantidade de vit�rias que o time possui: ");
				scanf("%d", &vit);
				
				printf("\n\nInforme a quantidade de empates que o time possui: ");
				scanf("%d", &emp);
				
				total= 3 * vit + emp;
				
				printf("\n\nA quantidade de pontos do %s � %d", time, total);
			    
				break;
			case 5:
			    
			    //int num, soma, sub;
				printf("Desenvolva um programa que leia um n�mero �n� inteiro, positivo e diferente de zero e apresente na tela: n � 1, e tamb�m n + 1.");
				printf(" \n\ninforme o n�mero desejado: ");
				scanf("%d", &num);
				
				if( num < 0 || num== 0){
					
					printf(" \n\nN�o foi poss�vel prosseguir, insira um n�mero positivo e diferente de 0. ");
					return 0;
					
				}
				soma = num + 1;
				sub = num - 1;
			
				
				printf("\n\nO n�mero %d + 1 = %d e %d - 1 = %d", num, soma, num, sub);
						    
				break;
			case 6:
			    
			    //float tempo,distancia;
				printf("Sabendo-se que a velocidade de cruzeiro de um avi�o 747-300 � de 900 km/h, fa�a um programa que leia uma dist�ncia (km), calcule e apresente na tela, quanto tempo (horas) ser� necess�rio para um 747-300 sobrevoar a dist�ncia informada.");
				printf(" \n\ninforme a dist�ncia que o avi�o ir� percorrer: ");
				scanf("%f", &distancia);
				
				tempo= distancia/900;	
			
			
				
				printf("\n\nO avi�o ir� demorar %.2f horas para percorrer %.2fhm/h", tempo, distancia);
						    
				break;
			case 7:
			    
			    //float voltas, caminhao, alqueire, qtdalqueire, qtdcaminhao;
		
				printf("Um caminh�o consegue transportar 18 toneladas de laranjas em uma viagem que faz entre a fazenda e a f�brica de suco de laranja. Um alqueire de terra produz em m�dia 250 toneladas de laranjas. Fa�a um programa que leia quantos caminh�es e quantos alqueires uma fazenda produtora de laranjas possui, calcule e apresente na tela quantas viagens de caminh�o ser�o necess�rias para transportar toda a colheita de laranjas.");
				printf("\n\nInforme a quantidade de alqueires que a fazenda possui: ");
				scanf("%f", &alqueire);
				
				printf("Informe a quantidade de caminh�oes que a fazenda possui: ");
				scanf("%f", &caminhao);	
					       
				qtdalqueire= 250 * alqueire;
				qtdcaminhao= 18 * caminhao;
				
				voltas= qtdalqueire/qtdcaminhao;
				
				          
				printf("\n\nO caminh�o precisar� dar %.2f voltas", voltas);
			    
				break;
			case 8:
			    
			    	//float raio, altura, area, volume, comprimento;
					
					printf("Desenvolva um programa que leia o raio (cm) e a altura (cm) de um cilindro. Calcule e mostre a �rea (cm2) e o volume (cm3) do cilindro.");
					printf(" \n\ninforme o raio do cilindro: ");
					scanf("%f", &raio);
					
					printf(" \n\ninforme a altura do cilindro: ");
					scanf("%f", &altura);
					
					
					arealateral= 2 * 3.14* raio * altura;
					areatotal=  arealateral + 2 * (3.14 * (raio * raio) ) ;
					volume= 3.14 * (raio * raio) * altura; 
						 
	
					printf("\n\n A area do cilindro � %.2fcm2\n O volume do cilindro � %.2fcm3", areatotal, volume);
			    
				break;
			case 9:
			    
			   // float preco, novopreco;
				//char mercadoria[20];
				
				printf("Desenvolva um programa que leia o nome e o pre�o de uma mercadoria. O programa dever� calcular um aumento de 5% no pre�o da mercadoria e mostrar o nome da mercadoria e o seu novo pre�o.");
				printf(" \n\ninforme o nome da mercadoria: ");
				scanf("%s", &mercadoria);
				
				printf(" \n\ninforme o pre�o da mercadoria: ");
				scanf("%f", &preco);
				
				
				novopreco= preco * 0.05 + preco;
			
			
				
				printf("\n\n Mercadoria: %s\n Novo pre�o: %.2f", mercadoria, novopreco);
			    
				break;
			case 10:
			    
			    //float pessoa, eleitores, participacao, qtdvotos;
				//char cidade[20];
				
				printf("Desenvolva um programa que leia o nome de uma cidade, o n�mero total de eleitores e o n�mero total de votos apurados na �ltima elei��o. O programa dever� calcular e exibir a porcentagem de participa��o dos eleitores desta cidade na �ltima elei��o.");
				printf(" \n\ninforme o nome da cidade: ");
				scanf("%s", &cidade);
				
				printf(" \n\ninforme a quantidade total de eleitores: ");
				scanf("%f", &eleitores);
				
				printf(" \n\ninforme a quantidade total de votos: ");
				scanf("%f", &qtdvotos);
				
				
				participacao= (qtdvotos/eleitores) * 100; 
			
			
				
				printf("\n\n A participa��o dos eleitores de %s na �ltima elei��o foi de %.1f %%.", cidade, participacao);
			    
				break;
				
			default: 
			
			
			    printf( "\n\nN�o foi poss�vel executar o programa, por favor, digite um n�mero de 1 � 10.\n");	
				
		
		}//switch
	
	
		printf("\n\nDigite 1 para executar novamente ou digite 0 para fializar: ");
		scanf("%d", &x);

	}while(x==1);


	
	
	
}
