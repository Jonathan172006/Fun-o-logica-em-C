#include <stdio.h>
#include <stdlib.h>

float converterEmCentimetros(float metros) {
    return metros * 100;
}

int main() {
    int centimetros, metros;

    printf("Digite um valor em metros: ");
    scanf("%d",&metros);

    centimetros = converterEmCentimetros(metros);

    printf("Valor em centimetros: %.1f cm. \n", centimetros);

    return 0;
}