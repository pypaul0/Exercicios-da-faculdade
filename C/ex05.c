//Elabore um programa que receba uma frase e mostre as letras que se 
//repetem, juntamente com o número de repetições

#include <stdio.h>

int main() {
	
	char frase[50];
	char alfabeto[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i', 'j', 'k', 'l', 'm', 'n','o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	int numLetras[26];
	int i, j;
	
	for (i = 0; i < 26; i++) {
		numLetras[i] = 0;
	}
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for (i = 0; frase[i] != '\0'; i++) {
		for (j = 0; j < 26; j++) {
			if(frase[i] == alfabeto[j]) {
				numLetras[j]++;
			}
		}
	}
	
	for (i = 0; i < 26; i++) {
		if(numLetras[i] > 1) {
			printf("[%c]: %d\n", alfabeto[i], numLetras[i]);
		}
	}
}
