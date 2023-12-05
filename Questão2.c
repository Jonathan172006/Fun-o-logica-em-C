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

void mostrarTabuada(int n1) {
    int i;
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d \n", n1, i, n1 * i);
    }
}

int main() {
    int numero;

    cabecalho(); // Chamada da função.
    printf("Digite um numero: ");
    scanf("%d",&numero);

    cabecalho();
    mostrarTabuada(numero);

return 0;
}