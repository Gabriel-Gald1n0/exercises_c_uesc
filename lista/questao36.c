#include <stdio.h>

int main() {
    int num=1, n;

    printf("Digite a quantidade de numeros impares: ");
    scanf("%d",&n);

     if (n <= 0)
    {
        printf("Apenas numeros positivos maiores que 0");
    }

    for (int i = 0; i <= n*2; i++){

        if (i % 2 != 0)
        {
            num *= i;
        }

    }

    printf("Produto de numeros impares: %d\n", num);

    return 0;
}


