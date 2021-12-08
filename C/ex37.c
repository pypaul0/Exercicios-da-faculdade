#include <stdio.h>

void calcularEsfera (float r, float *area, float *volume) {
	*area = 4 * 3.14159 * (r * r);
	*volume = 4 / 3 * 3.14159 * (r * r * r);
}

int main() {
	float raio;
	float area = 0;
	float volume = 0;
	
	printf("Digite o raio: ");
	scanf("%f", &raio);
	
	calcularEsfera(raio, &area, &volume);
	printf("Area: %.2f\nVolume: %.2f", area, volume);
}
