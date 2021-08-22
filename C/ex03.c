//Elabore um programa para criptografar uma frase dada pelo usuário, ou seja, 
//a criptografia inverte a frase

#include <stdio.h>
#include <string.h>

int main() {
	char frase[30];
	char frase_copy[30];
	int i;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for(i = 0; frase[i] != '\0'; i++) {
		frase_copy[i] = frase[i];
	}
	
	int t = strlen(frase)-1;

	for (i = 0, t; frase[i] != '\0'; i++, t--) {
		frase[i] = frase_copy[t];
	}
	printf("Frase codificada: %s", frase);
}
