#include <stdio.h>

int main() {
    int num=0, num_maior=0, num_menor=10000 , n=10,pares=0;

    printf("Digite os %d numeros\n",n);

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
        if (num % 2 == 0)
        {
            pares++;
        }

    }

    printf("Maior numero: %d\n",num_maior);
    printf("Menor numero: %d\n",num_menor);
    printf("Quantidade de numeros pares: %d\n", pares);

    return 0;
}

