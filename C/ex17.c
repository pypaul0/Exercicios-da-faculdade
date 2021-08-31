/*Faça uma função que receba três números: a, b e c, onde a é maior que 1. A função 
deve somar todos os inteiros entre b e c que sejam divisíveis por a (inclusive b e c) e 
retornar o resultado para a função principal*/

#include <stdio.h>

int soma(n1, n2, n3) {
	int maior = 0;
	int menor = 0;
	int soma = 0;
	
	if (n2 > n3) {
		maior = n2;
		menor = n3;
	} else {
		maior = n3;
		menor = n2;
	}
	
	for(menor; menor <= maior; menor++) {
		if (menor % n1 == 0) {
			soma += menor;
		}
	}
	return soma;
}

int main() {
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	
	while (n1 < 1) {
		printf("Digite o primeiro maior que 1: ");
		scanf("%d", &n1);
	}
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	printf("A soma: %d", soma(n1, n2, n3));
}
