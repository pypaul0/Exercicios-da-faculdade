/*Calcule o valor da expressão “x2 - y + 10” por meio de um programa em C, seguindo as seguintes regras:
- o cálculo da expressão deve ser feito numa função do tipo void;
- utilize apenas variáveis locais;
- a leitura dos dados e exibição dos resultados deve ser feita em main().*/

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
