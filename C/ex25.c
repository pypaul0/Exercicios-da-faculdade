/*Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores a R$ 500,00. Fa�a 
uma fun��o que tenha como argumento o sal�rio do funcion�rio e retorne o valor do novo sal�rio e do 
aumento. Caso n�o haja aumento, retorne zero. A fun��o deve obedecer ao seguinte prot�tipo: void calcularAumento (float *salario, float *aumento);
*/

void calcularAumento (float *salario, float *aumento) {
	if(*salario < 500) {
		*aumento = 0.30;
	}
	*salario = *salario + (*aumento * *salario);
}

int main() {
	float salario;
	float aumento = 1;
	
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	
	calcularAumento(&salario, &aumento);
	
	printf("Novo salario: %f", salario);
}
