/*Faça um programa com uma função que recebe dois números inteiros e retorna a 
multiplicação entre eles. O programa principal deve mostrar o resultado da 
multiplicação*/

#include <stdio.h>

int mult(n1, n2) {
	return n1 * n2;
}

int main() {
	int n1 = 0;
	int n2 = 0;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("A soma dos numeros e: %d", mult(n1, n2));
	return 0;
}
