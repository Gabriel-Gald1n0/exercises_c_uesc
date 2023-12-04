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

    printf("O módulo da diferença entre a e b é: %d\n", c);

     // Verificar se a divisão por zero é possível
    if (b != 0) {
        // Calcular o quociente de a por b
        c = a / b;
        printf("O quociente de a por b é: %d\n", c);

        // Verificar se a é divisível por b
        if (a % b == 0) {
            printf("a é divisível por b de forma exata.\n");
        } else {
            printf("a não é divisível por b de forma exata.\n");
        }
    } else {
        printf("A divisão por zero não é possível. Certifique-se de que b não seja igual a 0.\n");
    }

    return 0;
}
