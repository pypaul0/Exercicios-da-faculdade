/*O custo ao consumidor de um carro novo � a soma do pre�o de f�brica com o percentual de lucro do 
distribuidor e os impostos aplicados ao pre�o de f�brica. Fa�a uma fun��o que receba o pre�o de f�brica de 
um ve�culo, o percentual de lucro do distribuidor e o percentual de impostos. A fun��o dever retornar os 
seguintes valores:
a. o valor correspondente ao lucro do distribuidor;
b. o valor correspondente aos impostos;
c. o pre�o final do ve�culo.
*/

#include <stdio.h>

void calculo(float *pf, float *lc, float *im, float *fim) {
	*lc /= 100;
	*im /= 100;
	printf("%f\n%f\n", *lc, *im);
	*lc *= *pf;
	*im *= *pf;
	
	*fim = *pf + *lc + *im;
	printf("%f\n%f\n%f\n", *lc, *im, *fim);
}

int main() {
	float preco_fabrica;
	float lucro;
	float imposto;
	float final = 0;
	
	printf("Digite o preco de fabrica: ");
	scanf("%f", &preco_fabrica);
	printf("Digite o percentual de lucro: ");
	scanf("%f", &lucro);
	printf("Digite o percentual de imposto: ");
	scanf("%f", &imposto);
	
	calculo(&preco_fabrica, &lucro, &imposto, &final);
	
	printf("Lucro: %.2f\nImposto: %.2f\nPreco final: %.2f", lucro, imposto, final);
}
