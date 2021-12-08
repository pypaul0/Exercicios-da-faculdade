#include <stdio.h>

void maximoMinimo(int *v, int N, int *maximo, int *minimo) {
	int i;
	for(i = 0; i < N; i++) {
		if (i == 0) {
			*maximo = v[i];
			*minimo = v[i];
		} else if (v[i] > *maximo) {
			*maximo = v[i];
		} else if (v[i] < *minimo) {
			*minimo = v[i];
		}
	}
}

int main() {
	int max;
	int min;
	int TAMANHO = 3;
	int numeros[] = {1, 2, 3};
	maximoMinimo(numeros, TAMANHO, &max, &min);
	printf("Max: %d\nMin: %d", max, min);
}

