#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char cor[10], result[10];
	
	printf("\n\nDigite a cor do sem�foro (1-verde, 2-amarelo e 3- vermelho): ");
	scanf("%s", &cor);
	
	if(strcmp(cor, "verde") == 0){
		
	printf("\n\nPode seguir em frente, o sinal est� verde.");	
		
		
		
	}else if(strcmp(cor, "amarelo") == 0){
		
	printf("\n\nPode seguir em frente, mas tenha ATEN��O, o sinal est� amarelo.");
		
	}else if(strcmp(cor, "vermelho") == 0 ){
		
		printf("\n\nPare!! O sinal est� vermelho.");
		//sprintf(result, "vermelho");
		
	}else{
		
		printf("\n\nN�o foi possivel realizar a opera��o, por favor, digite a cor a atual do sem�foro (verde, amarelo ou vermelho)");
	}
	
	
	
	
}

