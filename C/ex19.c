/*Fa�a um programa com uma fun��o que receba como par�metro um inteiro no 
intervalo de 1 a 9 e mostre a seguinte tabela de multiplica��o (no exemplo, n=9)*/

#include <stdio.h>

void mult(num);

int main() {
	int num = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	mult(num);
}

void mult(num) {
	int i, j;
	
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d ", i * j);
		}
		printf("\n");
	}
}
