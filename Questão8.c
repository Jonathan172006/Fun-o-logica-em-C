#include <stdio.h>
#include <stdlib.h>

float inflacionarPreco(float preco) {
    float resultado;
   
   if (preco < 100) {
    resultado = preco * 1.1;
   } else {
    resultado;
}
return resultado;
}

int main() {

    float preco, precoInflacionado;

    printf("Digite preco do produto: ");
    scanf("%f",&preco);

    precoInflacionado = inflacionarpreco(preco);

    printf("Valor inflacionado: R$ %.2f \n", precoInflacionado);

    return 0;
}