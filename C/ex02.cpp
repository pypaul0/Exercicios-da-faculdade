#include <stdio.h>

int main() {
	
	char frase[30];
	int i = 0;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for(i; frase[i] != '\0'; i++) {
		if (frase[i] == 'a'
		|| frase[i] == 'e'
		|| frase[i] == 'i'
		|| frase[i] == 'o'
		|| frase[i] == 'u') {
			frase[i] = '*';
		}
	}
	printf("Frase codificada: %s", frase);
}
