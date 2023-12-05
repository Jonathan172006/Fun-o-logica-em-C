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

void verificarParOuImpar(int numero) {
    if (numero % 2 == 0) {
        printf("%d - par. \n", numero);
    } else {

        printf("%d - impar. \n", numero);
    }
}

int main() {
    int numero;

    cabecalho();
    printf("Digite um numero: ");
    scanf("%d",&numero);

    cabecalho();
    verificarParOuImpar(numero);

    return 0;
}