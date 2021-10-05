/*Considere o prot�tipo da fun��o a seguir e depois fa�a um programa para elevar um n�mero ao cubo.
void cubo (double numero, double *result);
Esta fun��o eleva um n�mero ao cubo e atualiza o par�metro �result� com o resultado.*/

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
