//Elabore um programa que receba uma frase e mostre a quantidade de vogais 
//da frase digitada

#include <stdio.h>

int main() {

	char frase[30];
	int i;
	int cont = 0;
	
	printf("Digite uma frase: ");
	gets(frase);
	
	for(i = 0; frase[i] != '\0'; i++) {
		
		if(frase[i] == 'a'
		|| frase[i] == 'e'
		|| frase[i] == 'i'
		|| frase[i] == 'o'
		|| frase[i] == 'u') {
			cont++;
		}
	}
	printf("A quantidade de vogais digitadas foi: %d", cont);
}
