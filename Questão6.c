#include <stdio.h>
#include <stdlib.h>

#define TAM 6

int verificarPar(int numeros[]) {
    int i, pares = 0;

    for (i = 0; i < TAM; i++) {
    if (numeros[i] % 2 == 0) { 
        pares++;
    }
    }
    
    return pares;
}

int verificarImpar(int numeros[]) {
    int i, impares = 0;

    for (i = 0; i < TAM; i++) {
        if (numeros[i] % 2 != 0) {
            impares++;
        }
    }
    return impares;
}

int main() {
    int numeros[TAM], i, pares, impares;

    for (i = 0; i < TAM; i++) {
        printf("Digite o primeiro numero: ");
        scanf("%d",&numeros[i]);
    }

    pares = verificarPar(numeros);
    impares = verificarImpar(numeros);


printf("\nQuantidade de pares: %d \n", pares);
printf("Quantidade de impares: %d \n", impares);

    return 0;
}