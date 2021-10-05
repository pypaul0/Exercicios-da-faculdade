/*Fa�a uma fun��o que tenha como argumento o sal�rio de um funcion�rio e que retorne o valor do sal�rio 
atualizado conforme a tabela de bonifica��o abaixo. A fun��o deve retornar tamb�m o valor da bonifica��o. 
Escreva tamb�m o prot�tipo.

Sal�rio Bonifica��o
At� R$ 500,00 | 5% do sal�rio
Mais de R$ 500,00 e menos de R$ 1.200,00 | 12% do sal�rio
R$ 1.200,00 ou mais | Sem bonifica��o (zero)
*/

#include <stdio.h>

void bonus(float *salario, float *bonificacao) {
	if(*salario <= 500) {
		*bonificacao = 0.05;
	} else if(*salario < 1200) {
		*bonificacao = 0.12;
	} else {
		*bonificacao = 0;
	}
	
	*salario += *salario * *bonificacao;
}

int main() {
	float salario;
	float bonificacao;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	bonus(&salario, &bonificacao);
	
	printf("Novo salario: %.2f | %.0f%%%", salario, bonificacao*100);
}
