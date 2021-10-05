/*Faça uma função que atualize o salário de um funcionário e retorne o bônus concedido de acordo com as 
seguintes regras:
- se salário maior ou igual que R$ 1.200,00, ganha bônus de 110,00
- se salário menor que R$ 1.200,00, ganha bônus de 190,00*/

#include <stdio.h>

void bonus(float *salario) {
	if (*salario >= 1200) {
		*salario += 110;
	} else {
		*salario += 190;
	}

}

int main() {
	float salario;
	
	printf("Digite seu salario: ");
	scanf("%d", &salario);
	
	bonus(&salario);
	
	printf("Salario novo: R$: %f", salario);
}

