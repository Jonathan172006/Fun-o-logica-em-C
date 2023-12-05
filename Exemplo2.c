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

int somar(int n1, int n2) {
    int resultado;
    resultado = n1 + n2;
    return resultado;
}

int main() {
    int primeiroNumero;
    int segundoNumero;
    int soma;

    cabecalho(); // Chamada da função.
    printf("Digite o primeiro numero: ");
    scanf("%d",&primeiroNumero);

    cabecalho(); // Chamada da função.
    printf("Digite o segundo numero: ");
    scanf("%d",&segundoNumero);

    soma = somar(primeiroNumero, segundoNumero);

    cabecalho(); // Chamada da função.
    printf("Soma: %d \n", soma);

return 0;
}