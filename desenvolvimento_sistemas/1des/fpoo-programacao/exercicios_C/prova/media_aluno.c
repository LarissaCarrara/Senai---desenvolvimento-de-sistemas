#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	/*Fa�a um programa em linguagem C que leia o nome e duas notas (de 0 a 10)
	 de 5 alunos, mostre na tela os nomes, m�dias e conceitos  "Aprovado", "Reprovado", 
	 destes alunos considerando como crit�rio para aprova��o a m�dia maior ou igual a 5.*/
	 
	 char nome[5][10];
	 float nota1[5], nota2[5], media[5];
	 int i;
	 
	 for(i=0;i<2; i++){
	 	printf("Digite o nome do %d� aluno: ", i+1);
	 	scanf("%s", &nome[i]);
	 	
	 	printf("Digite a primeira nota: ");
	 	scanf("%f", &nota1[i]);
	 	
	 	printf("Digite a segunda nota: ");
	 	scanf("%f", &nota2[i]);
	 	
	 	media[i] = (nota1[i] + nota2[i])/2;
	 }
	 
	 for(i=0; i<2; i++){
	 	
	 	if(media[i]>=5){
	 		printf("\nAluno: %s\nM�dia: %.2f\nSitua��o: Aprovado(a).", nome[i], media[i]);
		}else{
			printf("\nAluno: %s\nM�dia: %.2f\nSitua��o: Reprovado(a).", nome[i], media[i]);
		}
	 }
	 
}
