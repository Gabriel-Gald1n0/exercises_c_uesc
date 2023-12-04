#include <stdio.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do quadrado (entre 0 e 20): ");
    scanf("%d", &tamanho);

    if (tamanho < 0 || tamanho > 20) {
        printf("Tamanho inválido. O tamanho deve estar entre 0 e 20.\n");
    } else {
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < tamanho; j++) {
                // Verifica se estamos na primeira ou última linha, ou na primeira ou última coluna
                if (i == 0 || i == tamanho - 1 || j == 0 || j == tamanho - 1) {
                    printf("* ");
                } else {
                    printf("  "); // Espaço vazio para o interior do quadrado
                }
            }
            printf("\n");
        }
    }

    return 0;
}
