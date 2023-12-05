#include <stdio.h>
#include <stdlib.h>

void cabecalho() {
printf("\n====================================\n");
    printf("\tSENAI");
    printf("\n====================================\n");
}

int main() {
    char nome[200];
    int idade;

    cabecalho(); // Chamada da função.

    printf("\n====================================\n");
    printf("\tSENAI");
    printf("\n====================================\n");

    printf("Digite seu nome: ");
    gets(nome);

    printf("Digite uma idade: ");
    scanf("%d",&idade);

    printf("\n====================================\n");
    printf("\tSENAI");
    printf("\n====================================\n");

    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
   
    return 0;
}