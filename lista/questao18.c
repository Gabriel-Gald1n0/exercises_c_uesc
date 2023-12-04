#include <stdio.h>

int main(){
     float venda_produto = 1, salario;

     while(venda_produto >= 0)
    {
        printf("Entre com a Venda(-1 para finalizar): ");
        scanf("%f", &venda_produto);

        if(venda_produto < 0)
        {
            break;
        }

        salario = 200 + venda_produto*0.09;

         printf("Salario: %.2f\n",salario);
    }
    return 0;
}
