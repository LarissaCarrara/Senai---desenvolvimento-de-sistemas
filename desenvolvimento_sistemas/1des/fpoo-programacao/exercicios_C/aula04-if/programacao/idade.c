#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese"); 
int idade, crianca, adoles = 10, jovem=19, adulto=25, midade=45, idoso = 60;
char nome[10];	
	
	printf("\n\nReceba como entrada o nome e a idade de uma pessoa e diga se ela � crianca, adolescente, jovem, adulto, meia idade ou idosa.");
	
	printf("\n\nDigite o nome: ");
	scanf("%s", &nome);
	
	printf("\nDigite a idade: ");
	scanf("%d", &idade);
	


	if (idade >= adoles){
			
			if (idade>= jovem ){
				
				if(idade>= adulto){
					
					if(idade>= midade){
						
						if(idade >= idoso){
							
							printf("\n\nO/A %s � cosiderado idoso segundo a OMS", nome);
							
						}else{
							printf("\n\nO/A %s � cosiderado de meia idade segundo a OMS", nome);
						}
						
						
						
					}else{
						
						printf("\n\nO/A %s � cosiderado adulto segundo a OMS", nome);
					}
					
				}else{
					
					printf("\n\nO/A %s � cosiderado jovem segundo a OMS", nome);
				}
				
				
			}else{
				
				printf("\n\nO/A %s � cosiderado adolescente segundo a OMS", nome);
				
			}
		
		
		
	}else {
		
			printf("\n\nO/A %s � cosiderado crian�a segundo a OMS", nome);
		
	}




	
	
	
	
	
}
