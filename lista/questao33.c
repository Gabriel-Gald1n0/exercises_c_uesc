#include <stdio.h>

int main() {
    float valor, soma = 0.0;
    float anterior = 0.0;
    int contador = 0;

    printf("Digite os valores de ponto flutuante (termine quando a diferenca for maior que 1):\n");

    while (1) {
        printf("Digite um valor: ");
        scanf("%f", &valor);

        if (valor - anterior > 1.0) {
            break;
        }

        soma += valor;
        contador++;
        anterior = valor;
    }

    if (contador == 0) {
        printf("Nenhum valor foi fornecido. Impossivel calcular a media.\n");
    } else {
        float media = soma / contador;
        printf("A media dos valores, excluindo o ultimo: %.2f\n", media);
    }

    return 0;
}
