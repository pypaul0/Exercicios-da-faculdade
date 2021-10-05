/* Calcule o valor da expressão “x2 - y + 10” por meio de um programa em C, seguindo as seguintes regras:
- o cálculo da expressão deve ser feito numa função do tipo void;
- utilize apenas variáveis locais;
- a leitura dos dados e exibição dos resultados deve ser feita em main().*/

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
