#include <stdio.h>
#include <stdbool.h>

int main() {
    int numero_decimal = 0;
    char numero_binario[100];
    bool num_valido = true;

    printf("Digite um numero binario: ");
    scanf("%s", &numero_binario);

    int i = 0;
    while (numero_binario[i] != '\0') {
        if (numero_binario[i] != '0' && numero_binario[i] != '1') {
            num_valido = false; // Sequência inválida
            break; // Sai do loop
        }

    int digito = numero_binario[i] - '0'; // converte char para int

    numero_decimal = numero_decimal *2 +digito;

    i++;
    }

    if (num_valido) {
        printf("Valor equivalente em decimal: %d\n", numero_decimal);
    } else {
        printf("Sequencia invalida. Digite apenas 0s e 1s.\n");
    }

    return 0;
}

