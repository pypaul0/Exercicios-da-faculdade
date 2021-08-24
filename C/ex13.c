#include <stdio.h>
#include <string.h>

int main() {
	
	char palavra[30];
	
	printf("Digite uma palavra: ");
	gets(palavra);
	
	printf("A primeira letra: %c\nA ultima letra da palavra: %c\nTem %d letras na palavra.", palavra[0], palavra[strlen(palavra)-1], strlen(palavra));
}
