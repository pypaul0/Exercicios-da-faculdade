/*Fa�a uma fun��o que receba o sal�rio-base de um funcion�rio e retorne o sal�rio 
l�quido. O sal�rio l�quido � igual ao sal�rio-base mais 5% de gratifica��o, menos 7% de 
imposto.
*/

#include <stdio.h>

float salarioLiquido(float salario) {
	float grat = salario * 0.05;
	float imposto = salario * 0.07;
	return salario + grat - imposto;
}

void main() {
	float salario;
	
	printf("Salario: ");
	scanf("%f", &salario);
	
	printf("R$: %.2f", salarioLiquido(salario));
}
