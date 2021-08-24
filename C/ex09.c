//Elabore um programa que receba uma frase e mostre a quantidade de 
//consoantes da frase digitada

#include <stdio.h>

int main() {
	
	char consoantes[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
	char frase[30];
	int i, j, cont = 0;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for(i = 0; frase[i] != '\0'; i++) {
		for(j = 0; j < 21; j++) {
			if(frase[i] == consoantes[j]) {
				cont++;
			}
		}
	}
	printf("A frase tem %d consoantes", cont++);
}

