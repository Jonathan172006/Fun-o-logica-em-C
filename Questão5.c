#include <stdio.h>
#include <stdlib.h>

int somar(int n1, int n2) {
    int resultado;
    resultado = n1 + n2;
    return resultado;
}
int subtrair(int n1, int n2) {
    int resultado;
    resultado = n1 - n2;
    return resultado;
}
int multiplicar(int n1, int n2) {
    int resultado;
    resultado = n1 * n2;
    return resultado;
}
float dividir(int n1, int n2) {
    float resultado;
    resultado = n1 / n2;
    return resultado;
}

int main() {
    int primeiroNumero, segundoNumero;
    int soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d",&primeiroNumero);

    printf("Digite o segundo numero: ");
    scanf("%d",&segundoNumero);

    soma = somar(primeiroNumero, segundoNumero);
    subtracao = subtrair(primeiroNumero, segundoNumero);
    multiplicacao = multiplicar(primeiroNumero, segundoNumero);
    divisao = dividir(primeiroNumero, segundoNumero);


    printf("\nSoma: %d \n", soma);
    printf("\nSubtracao: %d \n", subtracao);
    printf("\nMultiplicacao: %d \n", multiplicacao);
    printf("\nDivisao: %.2f \n", divisao);

    return 0;
}