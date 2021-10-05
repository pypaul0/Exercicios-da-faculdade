#include <stdio.h>

int main () {
	float valor=1.7, quantia=1.2; /* (1) */
	float *ptr1=&valor, *ptr2; /* (2) */
	float result;
	*ptr1 = *ptr1 + 3.3; /* (3) */
	printf ("%f\n", valor); /* (a) */
	ptr2 = &quantia; /* (4) */
	printf ("%x\n", ptr2); /* (b) */
	printf ("%x\n", ptr1); /* (c) */
	printf ("%f\n", *ptr2 * 2); /* (d) */
	printf ("%f\n", quantia); /* (e) */
	printf ("%f\n", *ptr1); /* (f) */
	valor = valor + quantia; /* (5) */
	ptr1 = &result; /* (6) */
	result = valor + 1.1; /* (7) */
	printf ("%x\n", ptr1); /* (g) */
	printf ("%f\n", *ptr1); /* (h) */
	printf ("%x\n", &result); /* (i) */
	printf ("%x\n", &ptr2); /* (j) */

}

