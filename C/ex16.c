/*Fa�a uma fun��o que receba dois n�meros positivos por par�metro e retorne a soma 
dos n n�meros inteiros existentes entre eles.
*/

#include <stdio.h>

int soma(n1, n2) {
	return n1 + n2;
}

int main() {
	int n1 = 0;
	int n2 = 0;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("A soma dos numeros e: %d", soma(n1, n2));
	return 0;
}
