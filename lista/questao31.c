#include <stdio.h>

int main() {
    int quantidade, numero, soma = 0;

    printf("Digite a quantidade de valores na sequencia: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("A quantidade de valores deve ser um numero positivo.\n");
        return 1;
    }

    for (int i = 1; i <= quantidade; i++) {
        printf("Digite o %d valor: ", i);
        scanf("%d", &numero);

        soma += numero;

        printf("Soma parcial apos %d valores: %d\n", i, soma);
    }

    printf("A soma total dos %d valores e: %d\n", quantidade, soma);

    return 0;
}
