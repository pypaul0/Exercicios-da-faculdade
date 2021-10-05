/*Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça 
uma função que tenha como argumento o salário do funcionário e retorne o valor do novo salário e do 
aumento. Caso não haja aumento, retorne zero. A função deve obedecer ao seguinte protótipo: void calcularAumento (float *salario, float *aumento);
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
