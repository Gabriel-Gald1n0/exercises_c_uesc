#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    printf("Digite o 1 numero: ");
    scanf("%i", &a);

    printf("Digite o 2 numero: ");
    scanf("%i", &b);

    c = a + b;
    printf("valor de C em hexadecimal: %x\n",c);

    c = a * b;
    printf("valor de C em octal: %o\n",c);

     if (a - b >= 0) {
        c = a - b;
    } else {
        c = b - a;
    }

    printf("O m�dulo da diferen�a entre a e b �: %d\n", c);

     // Verificar se a divis�o por zero � poss�vel
    if (b != 0) {
        // Calcular o quociente de a por b
        c = a / b;
        printf("O quociente de a por b �: %d\n", c);

        // Verificar se a � divis�vel por b
        if (a % b == 0) {
            printf("a � divis�vel por b de forma exata.\n");
        } else {
            printf("a n�o � divis�vel por b de forma exata.\n");
        }
    } else {
        printf("A divis�o por zero n�o � poss�vel. Certifique-se de que b n�o seja igual a 0.\n");
    }

    return 0;
}
