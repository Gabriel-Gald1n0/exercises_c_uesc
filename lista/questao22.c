#include <stdio.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do quadrado (entre 0 e 20): ");
    scanf("%d", &tamanho);

    if (tamanho < 0 || tamanho > 20) {
        printf("Tamanho inv�lido. O tamanho deve estar entre 0 e 20.\n");
    } else {
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}
