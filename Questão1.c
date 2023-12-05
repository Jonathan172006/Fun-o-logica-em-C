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

float calcularMedia(float n1, float n2) {
    float resultado;
    resultado = n1 + n2 / 2;
    return resultado;
}

int main() {
    float primeiroNumero;
    float segundoNumero;
    float media;

    cabecalho(); // Chamada da função.
    printf("Digite o primeiro numero: ");
    scanf("%f",&primeiroNumero);

    cabecalho(); // Chamada da função.
    printf("Digite o segundo numero: ");
    scanf("%f",&segundoNumero);

    media = calcularMedia(primeiroNumero, segundoNumero);

    cabecalho(); // Chamada da função.
    printf("Media: %.1f \n", media);

    return 0;
}