#include <stdio.h>
#include <limits.h>

int main() {
    int valor;

    printf("Digite o 1 numero: ");
    scanf("%i", &valor);

    printf("%i = %s\n", valor, (valor >= SHRT_MIN && valor <= SHRT_MAX) ? "este valor pertence ao intervalo dos int" : "e maior que um int"); ///

    return 0;
}
