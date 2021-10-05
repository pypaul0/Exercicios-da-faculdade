/*Fa�a uma fun��o que atualize o sal�rio de um funcion�rio e retorne o b�nus concedido de acordo com as 
seguintes regras:
- se sal�rio maior ou igual que R$ 1.200,00, ganha b�nus de 110,00
- se sal�rio menor que R$ 1.200,00, ganha b�nus de 190,00*/

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

