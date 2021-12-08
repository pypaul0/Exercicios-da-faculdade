#include <stdio.h>

void maior_e_menor(int *a, int *b, int *c) {
	int v[] = {*a, *b, *c};
	int i, j;
    int aux;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(v[i] < v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    *a = v[0];
    *b = v[1];
    *c = v[2];
}

int main() {
	int n1 = 3, n2= 7, n3 = 1;
	maior_e_menor(&n1, &n2, &n3);
	printf("A: %d\nB: %d\nC: %d", n1, n2, n3);
}
