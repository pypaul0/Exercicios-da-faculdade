#include <stdio.h>
#include <string.h>

int main() {
	
	char palavra[30];
	char novaPalavra[30];
	int i, j;
	
	printf("Digite uma palavra: ");
	gets(palavra);
	int tamanho = strlen(palavra) * 2;
	
	for(i = 0, j = 0; i < tamanho; i += 2, j++) {
		novaPalavra[i] = palavra[j];
		novaPalavra[i+1] = palavra[j];
	}
	printf("%s", novaPalavra);
}
