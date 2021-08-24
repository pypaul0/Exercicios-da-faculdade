//Elabore um programa que receba uma frase e mostre a quantidade de 
//caracteres informados (utilize a função strlen)

#include <stdio.h>
#include <string.h>

int main() {
	
	char frase[30];
	
	printf("Digite uma frase: ");
	gets(frase);
	
	printf("A frase tem %d caracteres", strlen(frase));	
}
