#include <stdio.h>
#include <stdlib.h>

void cabecalho() {
    printf("\n====================================\n");
    printf("\tSENAI");
    printf("\n====================================\n");
}

void limpaTela() {
    fflush(stdin);
    system("cls || clear");
}

void verificarQuantidadeParOuImpar(int numero[]) {
    int i, pares = 0, impares = 0;

    for ( i = 0; i < count; i++)
    if (numero % 2 == 0) {
        pares++;
    } else {

        impares++;
    }
}

printf("Quantidade de pares: %d \n", pares);
printf("Quantidade de impares: %d \n", impares);

int main() {
    int numero[TAM], i;

    cabecalho();
    for (i = 0; i < TAM; i++) {
        printf("Digite um numero: ");
        scanf("%d",&numero[i]);
    }

    cabecalho();
    verificarQuantidadeParOuImpar(numero);

    return 0;
}