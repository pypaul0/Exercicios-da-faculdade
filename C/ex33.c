#include <stdio.h>

void calcula(int *x, int *y) {
	int cx = *x;
	
	*x = *y + cx;
	*y -= cx;
}

int main() {
	int num1 = 2, num2 = 3;
	calcula(&num1, &num2);
	printf("Soma: %d\nSubtracao: %d", num1, num2);
}
