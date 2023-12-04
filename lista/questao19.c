#include <stdio.h>

int main(){
     float capital = 1, juros, taxa,dias;

     while(capital > 0)
    {
        printf("Entre com o valor do emprestimo(0 para finalizar): ");
        scanf("%f", &capital);

        if(capital <= 0)
                {
                    break;
                }

        printf("Entre com o valor a taxa de juros: ");
        scanf("%f", &taxa);

        printf("Entre com o perido do emprestimo (dias): ");
        scanf("%f", &dias);

        juros = capital*taxa*dias/365;

         printf("O valor dos juros: $%.2f\n\n",juros);
    }
    return 0;
}

