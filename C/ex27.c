/*Considere o protótipo da função a seguir e depois faça um programa para elevar um número ao cubo.
void cubo (double numero, double *result);
Esta função eleva um número ao cubo e atualiza o parâmetro “result” com o resultado.*/

#include <stdio.h>
#include <math.h>
void cubo(double numero, double *result) {
	*result = pow(numero, 3);
}

int main() {
	double resultado;
	double num = 3;
	
	cubo(num, &resultado);
	
	printf("Resultado: %.2f", resultado);
}
