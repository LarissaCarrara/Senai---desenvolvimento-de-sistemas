#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	float bruto, imposto_renda, inss, sindicato, liquido, rshr, hr, desconto;
	
		/* Fa�a um Programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s.
	Calcule e mostre o total do seu sal�rio no referido m�s, sabendo-se que s�o descontados 11% para o
	Imposto de Renda, 8% para o INSS e 5% para o sindicato, fa�a um programa que nos d�: 
	a.	sal�rio bruto.
	b. quanto pagou de IR.
	c. quanto pagou ao INSS.
	d. quanto pagou ao sindicato.
	e. o sal�rio l�quido
	f. calcule os descontos e o sal�rio l�quido, conforme a tabela abaixo:*/
	
	
	printf("Digite o quanto voc� ganha por hora: ");
	scanf("%f", &rshr);
	
	printf("Digite a quantidade de horas que voc� trabalha no m�s: ");
	scanf("%f", &hr);
	
	bruto = rshr * hr;
	imposto_renda = (float) bruto* 11/100;
	inss= (float)bruto * 8/100;
	sindicato= (float) bruto* 5/100;
	liquido= bruto - imposto_renda - inss - sindicato;
	desconto= imposto_renda + inss+ sindicato;
	
	printf("\n\nsal�rio bruto: %.2f\n imposto de renda: %.2f\n inss: %.2f\n sindicato: %.2f\n valor descontado: %.2f\n sal�rio l�quido: %.2f\n", bruto, imposto_renda, inss, sindicato,desconto, liquido);
	
	
}
