/*Calcule o valor da express�o �x2 - y + 10� por meio de um programa em C, seguindo as seguintes regras:
- o c�lculo da express�o deve ser feito numa fun��o do tipo void;
- utilize apenas vari�veis locais;
- a leitura dos dados e exibi��o dos resultados deve ser feita em main().*/

#include <stdio.h>

void calcula(int *x, int *y, int *res) {
	*res = *x * 2 - *y + 10;
}

int main() {
	int x, y;
	int r = 0;
	
	printf("Expressao: x2 - y + 10\nDigite o valor de X: ");
	scanf("%d", &x);
	
	printf("Digite o valor de Y: ");
	scanf("%d", &y);
	
	calcula(&x, &y, &r);
	
	printf("Resultado: %d", r);
}
