#include <stdio.h>
#include <stdbool.h>

int main() {
    int numero, numeroReverso = 0, numeroOriginal, digito;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    numeroOriginal = numero; // Salva o número original para comparação

    while (numero > 0) {
        digito = numero % 10;
        numeroReverso = numeroReverso * 10 + digito;
        numero /= 10;
    }

    if (numeroOriginal == numeroReverso) {
        printf("O numero %d e um palindromo.\n", numeroOriginal);
    } else {
        printf("O numero %d nao e um palindromo.\n", numeroOriginal);
    }

    return 0;
}
