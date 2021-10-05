/* Calcule o valor da express�o �x2 - y + 10� por meio de um programa em C, seguindo as seguintes regras:
- o c�lculo da express�o deve ser feito numa fun��o do tipo void;
- utilize apenas vari�veis locais;
- a leitura dos dados e exibi��o dos resultados deve ser feita em main().*/

void calc(int x, int y, int *result) {
	*result = x * 2 - y + 10;
}

int main() {
	int x, y, result;
	
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	printf("Digite o valor de Y: ");
	scanf("%d", &y);
	
	calc(x, y, &result);
	
	printf("Resultado: %d", result); 
}
