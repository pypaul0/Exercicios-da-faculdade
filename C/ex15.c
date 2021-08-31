/*Faça um programa com uma função que recebe um número inteiro, verifica e retorna 1 
se o número recebido é par e 0 se o número recebido é ímpar*/

#include <stdio.h>

int par(int num) {
	if (num % 2 == 0) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	int num = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(par(num)) {
		printf("O numero e par.");
	} else {
		printf("O numero e impar");
	}
	return 0;
}
