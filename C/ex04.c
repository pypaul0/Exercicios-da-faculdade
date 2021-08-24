//Elabore um programa para criptografar uma frase dada pelo usuário, ou seja, 
//a criptografia inverte a frase

#include <stdio.h>
#include <string.h>

int main() {
	
	char frase1[30];
	char frase2[30];
	int i;
	
	printf("Digite a primeira frase: ");
	gets(frase1);
	printf("Digite a segunda frase: ");
	gets(frase2);
	
	int tamanho = strlen(frase1) + strlen(frase2) + 1;
	char frase3[tamanho];
	
	for(i = 0; frase1[i] != '\0'; i++) {
		frase3[i] = frase1[i];
	}
	
	frase3[i] = ' ';
	
	for(i = 0; frase2[i] != '\0'; i++) {
		frase3[strlen(frase1) + i + 1] = frase2[i];
	}
	
	frase3[tamanho] = '\0';
	
	printf("%s", frase3);
}
