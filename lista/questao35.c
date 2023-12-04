#include <stdio.h>

int main() {
    int num=0, n;

    printf("Digite a quantidade de numeros pares: ");
    scanf("%d",&n);

     if (n <= 0)
    {
        printf("Apenas numeros positivos maiores que 0");
    }

    for (int i = 0; i <= n*2; i++){

        if (i % 2 == 0)
        {
            num += i;
        }

    }

    printf("Soma de numeros pares: %d\n", num);

    return 0;
}


