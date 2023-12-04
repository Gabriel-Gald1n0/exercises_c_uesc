#include <stdio.h>

int main() {
    int num=0, num_maior=0, num_menor=10000 , n,pares=0;

    printf("Digite a quantidade de numeros: ");
    scanf("%d",&n);

    if (n <= 0)
    {
        printf("Apenas numeros positivos maiores que 0");
    }

    for (int i = 0; i < n; i++){
        printf("Digite o %d numeros: ",i+1);
        scanf("%d", &num);

        if(num > num_maior)
        {
            num_maior = num;
        }
            if(num < num_menor)
        {
            num_menor = num;
        }

    }

    printf("Maior numero: %d\n",num_maior);
    printf("Menor numero: %d\n",num_menor);

    return 0;
}

