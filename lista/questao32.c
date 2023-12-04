#include <stdio.h>

int main() {
    float valor, soma = 0.0;
    int contador = 0;

    printf("Digite os valores de ponto flutuante positivos (termine com um valor negativo):\n");

    while (1) {
        printf("Digite um valor: ");
        scanf("%f", &valor);

        if (valor < 0.0) {
            if (contador == 0) {
                printf("Nenhum valor positivo fornecido. Impossivel calcular a media.\n");
            } else {
                float media = soma / contador;
                printf("A media dos valores: %.2f\n", media);
            }
            break;
        }

        if (valor >= 0.0) {
            soma += valor;
            contador++;
        }
    }

    return 0;
}
