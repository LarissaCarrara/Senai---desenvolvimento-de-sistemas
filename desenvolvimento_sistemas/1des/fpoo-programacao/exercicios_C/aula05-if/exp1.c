#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cor;
	
	printf("\n\nDigite a cor do sem�foro (1-verde, 2-amarelo e 3- vermelho): ");
	scanf("%d", &cor);
	
	if(cor == 1){
		
	printf("\n\nPode seguir em frente, o sinal est� verde.");	
		
		
		
	}else if(cor == 2 ){
		
	printf("\n\nPode seguir em frente, mas tenha ATEN��O, o sinal est� amarelo.");
		
	}else if(cor == 3){
		
		printf("\n\nPare!! O sinal est� vermelho.");
		
	}else{
		
		printf("\n\nN�o foi possivel realizar a opera��o, por favor, digite o n�mero correspondente a atual cor do sem�foro (verde, amarelo ou vermelho)");
	}
	
	
	
	
}

