/*Faça uma função que receba um vetor de notas de uma disciplina e retorne a média aritmética, a maior e a 
menor das notas.*/

#include <stdio.h>

void calc_media(float *nota, float *media, float *maior, float *menor) {
	int i;
	float soma = 0;
	
	for(i = 0; i < 3; i++) {
		soma += nota[i];
		
		if(i == 0) {
			*maior = nota[i];
			*menor = nota[i];
		} else if (nota[i] > *maior) {
			*maior = nota[i];
		} else if (nota[i] < *menor) {
			*menor = nota[i];
		}
	}
	
	*media = soma / 3;
}

int main() {
	int i;
	float nota[3];
	float media = 0;
	float maior = 0;
	float menor = 0;
	
	for(i = 0; i < 3; i++) {
		printf("Digite uma nota: ");
		scanf("%f", &nota[i]);
	}
	
	calc_media(nota, &media, &maior, &menor);
	
	printf("Media: %.2f\n", media);
	printf("Maior: %.2f\n", maior);
	printf("Menor: %.2f", menor);
}

