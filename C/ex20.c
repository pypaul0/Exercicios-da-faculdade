/*Faça uma função que receba três notas e seus respectivos pesos, calcule a média 
ponderada dessas notas e retorne o resultado*/

#include <stdio.h>

void media(float n1, float n2, float n3, int p1, int p2, int p3) {
	int peso = p1 + p2 + p3;
	float media = ((p1 * n1) + (p2 * n2) + (p3 * n3)) / peso;
	printf("%.2f", media);
}

int main() {
	float n1, n2, n3;
	int p1, p2, p3;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite o peso: ");
	scanf("%d", &p1);
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n2);
	printf("Digite o peso: ");
	scanf("%d", &p2);
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n3);
	printf("Digite o peso: ");
	scanf("%d", &p3);
	
	media(n1, n2, n3, p1, p2, p3);
}
