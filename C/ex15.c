/*Fa�a um programa com uma fun��o que recebe um n�mero inteiro, verifica e retorna 1 
se o n�mero recebido � par e 0 se o n�mero recebido � �mpar*/

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
