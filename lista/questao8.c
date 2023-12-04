#include <stdio.h>

int main() {
    int valor;
    int soma = 0;

    do{
        printf("Digite o 1 numero: ");
        scanf("%d", &valor);

        if(valor <= 0)
        {
           printf("Por favor digite um numero maior que 0.\n");
        }

    } while(valor <=0);

    for(int i = 0; i <= valor; i++){
        soma = soma + i;
    }

    printf("Soma de todos os valores de %d: %d", valor, soma);

    return 0;
}


