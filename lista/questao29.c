#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, fatorial=1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero < 0)
    {
        printf("Digite um numero positivo.");

    }else
    {
        for(int i =1; i <= numero; i++)
        {
            fatorial = fatorial * i;
        }
        printf("\n%d! = %d", numero, fatorial);
    }

    return 0;
}

/*
O programa funcionará bem para números inteiros positivos razoáveis,
mas enfrentará limitações quando o valor do fatorial for muito grande
para ser representado em um int. A capacidade de representação de
números inteiros em C depende do sistema e da plataforma
em que o código é executado.

*/
