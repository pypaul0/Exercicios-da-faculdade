/*Faça uma função que receba o salário-base de um funcionário e retorne o salário 
líquido. O salário líquido é igual ao salário-base mais 5% de gratificação, menos 7% de 
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
