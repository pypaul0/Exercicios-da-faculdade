/*Faça uma função que tenha como argumento o salário de um funcionário e que retorne o valor do salário 
atualizado conforme a tabela de bonificação abaixo. A função deve retornar também o valor da bonificação. 
Escreva também o protótipo.

Salário Bonificação
Até R$ 500,00 | 5% do salário
Mais de R$ 500,00 e menos de R$ 1.200,00 | 12% do salário
R$ 1.200,00 ou mais | Sem bonificação (zero)
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
