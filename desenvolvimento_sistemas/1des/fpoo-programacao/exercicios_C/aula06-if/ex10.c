#include <stdio.h>
#include <locale.h>
int main(){
	//Configura��es e vari�veis
	setlocale(LC_ALL,"");
	float n1, n2, n3;
	float media;
	printf("Digite as tr�s notas do aluno (exemplo de n� cm v�rgula: 3,5): ");
	scanf("%f %f %f",&n1, &n2, &n3);


	media = (float)(n1+n2+n3)/3;
	
	//Processamento
	if(media >= 6){
		printf("O aluno foi aprovado com a m�dia de %.2f\n",media);
		
	}else if(media>= 4){
			printf("O aluno est� de recupera��o com a m�dia de %.2f\n",media);
	}else{
		
			printf("O aluno foi reprovado com a m�dia de %.2f\n", media);
	}
}
