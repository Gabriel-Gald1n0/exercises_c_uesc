#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro para o tamanho dos triangulos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero deve ser positivo.\n");
        return 1;
    }

    printf("Triangulo 1:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    printf("Triangulo 2:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    printf("Triangulo 3:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
