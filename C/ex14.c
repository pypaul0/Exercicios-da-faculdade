#include <stdio.h>
#include <string.h>

int main() {
	
	char palavra1[30];
	char palavra2[30];
	char novaPalavra[30];
	int num, i, cont = 0;
	
	printf("Digite a primeira palavra: ");
	gets(palavra1);
	printf("Digite a segunda palavra: ");
	gets(palavra2);
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	int tamanho1 = strlen(palavra1);
	int tamanho2 = strlen(palavra2);
	
	for (i = 0; i < tamanho1 - num; i++) {
		printf("[%d] - %c\n", i, palavra1[i]);
		novaPalavra[i] = palavra1[i];
	}
	int j = i;
	for(i = tamanho2 - num; i < tamanho2; i++) {
		printf("[%d] - %c\n", i, palavra2[i]);
		novaPalavra[j+cont] = palavra2[i];
		cont++;
	}
	printf("Nova palavra: %s", novaPalavra);
}
