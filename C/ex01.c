//Elabore um programa que receba uma frase, calcule e mostre a quantidade 
//de palavras da frase digitada

#include <stdio.h>

int main() {

    int cont = 0;
    char frase[20];
    int i = 0;

    printf("Digite uma frase: ");
    gets(frase);

    for(i; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            cont++;
        }
    }
    printf("A frase tem %d palavras", cont+1);
}
