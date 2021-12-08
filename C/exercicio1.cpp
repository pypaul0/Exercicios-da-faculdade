#include <stdio.h>

typedef struct {
	char nome[20];
	float altura;
	int ano_de_nascimento;
} Pessoa;

int main() {
	Pessoa pessoa[10];
	int i;
	for(i = 0; i < 10; i++) {
		printf("Nome: ");
		gets(pessoa[i].nome);
		printf("Altura: ");
		scanf("%f", &pessoa[i].altura);
		printf("Ano de nascimento: ");
		scanf("%d", &pessoa[i].ano_de_nascimento);
	}
	int data_fornecida = 2002;
	for(i = 0; i < 10; i++) {
		printf("\nNome: %s", pessoa[i].nome);
		printf("\nAltura; %f", pessoa[i].altura);
	}
	printf("\n-------------------");
	for(i = 0; i < 10; i++) {
		printf("\nPessoas que nasceram antes de %d", data_fornecida);
		if(pessoa[i].ano_de_nascimento < data_fornecida) {
			printf("\nNome: %s", pessoa[i].nome);
		}
	}
}
