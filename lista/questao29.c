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
O programa funcionar� bem para n�meros inteiros positivos razo�veis,
mas enfrentar� limita��es quando o valor do fatorial for muito grande
para ser representado em um int. A capacidade de representa��o de
n�meros inteiros em C depende do sistema e da plataforma
em que o c�digo � executado.

*/
