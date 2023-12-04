#include <stdio.h>

int main() {
    int numero, digito, contagem = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int numeroAbsoluto = numero < 0 ? -numero : numero; // Trata números negativos
    while (numeroAbsoluto > 0) {
        digito = numeroAbsoluto % 10; // Obtém o dígito menos significativo -> pego o ultimo numero antes da virgula implicita ou explicita
        if (digito == 7) {
            contagem++;
        }
        numeroAbsoluto /= 10; // Remove o dígito menos significativo
    }

    printf("O numero de digitos iguais a 7 e: %d\n", contagem);

    return 0;
}
