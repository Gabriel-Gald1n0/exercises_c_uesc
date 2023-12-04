#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro positivo para encontrar o termo da seque  ncia de Fibonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Digite um número inteiro positivo.\n");
    } else {
        int primeiro = 0, segundo = 1, proximo;

        if (n == 0) {
            printf("O %d-esimo termo da sequencia de Fibonacci e: %d\n", n, primeiro);
        } else if (n == 1) {
            printf("O %d-esimo termo da sequencia de Fibonacci e: %d\n", n, segundo);
        } else {
            for (int i = 2; i <= n; i++) {
                proximo = primeiro + segundo;
                primeiro = segundo;
                segundo = proximo;
            }
            printf("O %d-esimo termo da sequencia de Fibonacci e: %d\n", n, proximo);
        }
    }

    return 0;
}
