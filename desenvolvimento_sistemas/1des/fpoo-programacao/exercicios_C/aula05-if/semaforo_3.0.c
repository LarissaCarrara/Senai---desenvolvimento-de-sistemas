#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cor;
	
	printf("\n\nDigite a cor do sem�foro (1-verde, 2-amarelo e 3- vermelho): ");
	scanf("%d", &cor);
	
	switch (cor){
	
	case 1:
	printf("\n\nPode seguir em frente, o sinal est� verde.");	
	break;	
		
	case 2:
	printf("\n\nPode seguir em frente, mas tenha ATEN��O, o sinal est� amarelo.");
	break;
	
	case 3:
	printf("\n\nPare!! O sinal est� vermelho.");
	break;	
	
	defaut:
	printf("\n\nN�o foi possivel realizar a opera��o, por favor, digite o n�mero correspondente a atual cor do sem�foro (verde, amarelo ou vermelho)");
	break;
	}
	
}
	
	


