#include <stdio.h>
#include <stdbool.h>

int main() {
    int numero, d1, d2, d4, d5;

    printf("Digite um numero de 5 digitos: ");
    scanf("%d", &numero);

    if (numero < 10000 || numero > 99999) {
        printf("Numero invalido. Deve ter 5 digitos.\n");
        return 1;
    }

    d1 = numero / 10000; // Primeiro dígito
    d2 = (numero / 1000) % 10; // Segundo dígito
    d4 = (numero / 10) % 10; // Quarto dígito
    d5 = numero % 10; // Quinto dígito

    //printf("d1 = %d\n d2 = %d\n d4 = %d\n d5 = %d\n",d1,d2,d4,d5);

    if (d1 == d5 && d2 == d4) {
        printf("O numero %d e um palindromo.\n", numero);
    } else {
        printf("O numero %d nao e um palindromo.\n", numero);
    }

    return 0;
}
