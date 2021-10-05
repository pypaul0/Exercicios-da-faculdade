/* Fa�a uma fun��o que tenha como argumentos a porcentagem (%) de aumento do �lcool, da gasolina e do 
�leo diesel e tamb�m os valores destes combust�veis. Retorne os valores corrigidos de acordo com as 
porcentagens de aumento informadas. Fa�a um programa (main) que demonstre utiliza��o da fun��o que 
voc� criou*/

#include <stdio.h>

void calculo(float *al, float *aum_al, float *gas, float *aum_gas, float *oleo, float *aum_oleo) {
	*aum_al /= 100;
	*aum_gas /= 100;
	*aum_oleo /= 100;
	
	*al += *al * *aum_al;
	*gas += *gas * *aum_gas;
	*oleo += *oleo * *aum_oleo;
}

int main() {
	float alcool, aum_alcool;
	float gasolina, aum_gasolina;
	float oleo, aum_oleo;
	
	printf("Digite o valor do alcool: ");
	scanf("%f", &alcool);
	printf("Digite o aumento do alcool: ");
	scanf("%f", &aum_alcool);
	
	printf("Digite o valor do gasolina: ");
	scanf("%f", &gasolina);
	printf("Digite o aumento do gasolina: ");
	scanf("%f", &aum_gasolina);
	
	printf("Digite o valor do oleo disel: ");
	scanf("%f", &oleo);
	printf("Digite o aumento do oleo disel: ");
	scanf("%f", &aum_oleo);
	
	calculo(&alcool, &aum_alcool, &gasolina, &aum_gasolina, &oleo, &aum_oleo);
	
	printf("Alcool: %.2f\nGasolina: %.2f\nOleo disel: %.2f", alcool, gasolina, oleo);
}
