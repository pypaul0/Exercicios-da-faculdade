//Elabore um programa que receba uma frase e mostre a quantidade de 
//caracteres informados (sem a utilização da função strlen)

#include <stdio.h>

int main() {
	
	char frase[30];
	int i;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for(i = 0; frase[i] != '\0'; i++);
	
	printf("A frase tem %d caracteres", i);	
}

