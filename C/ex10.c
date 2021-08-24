//Elabore um programa que receba uma frase e mostre cada palavra dessa 
//frase em linha separada

#include <stdio.h>

int main() {
	
	char frase[30];
	int i;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for (i = 0; frase[i] != '\0'; i++) {
		if (frase[i] == ' ') {
			frase[i] = '\n';
		}
	}
	printf("%s", frase);
}

