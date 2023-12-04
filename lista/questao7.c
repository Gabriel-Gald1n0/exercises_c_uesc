#include <stdio.h>

int main() {
    int valor;

    printf("Digite o 1 numero: ");
    scanf("%d", &valor);

    int numero = (valor % 6) + 1;

    printf("O numero convertido e: %d",numero);

    return 0;
}

