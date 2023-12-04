#include <stdio.h>
#include <stdlib.h>

int main() {
    float preco_custo, preco_varejo;
    int produto, dia ,produto_campeao = 0,dia_Mlucro=0, quantidade,total_vendido = 0;
    float lucroTotal = 0, maiorLucro = 0;

    for(dia = 1; dia <= 6; dia++){
        printf("Dia %d:\n",dia);
        float lucroDia = 0;

        for(produto = 1; produto <= 5; produto++){

             switch(produto){
        case 1:
            preco_custo = 1.55;
            preco_varejo = 2.98;
            break;
        case 2:
            preco_custo = 2.27;
            preco_varejo = 4.50;
            break;
        case 3:
            preco_custo = 5.47;
            preco_varejo = 9.99;
            break;
        case 4:
            preco_custo = 3.80;
            preco_varejo = 4.49;
            break;
        case 5:
            preco_custo = 3.15;
            preco_varejo = 6.87;
            break;
        default:
            printf("Produto invalido. Por favor, escolha um numero de produto de 1 a 5.\n");
            produto--;
            continue;
        }

        printf("Informe a quantidade vendida do Produto %d: ",produto);
        scanf("%d",&quantidade);

        total_vendido += quantidade;
        lucroDia += (preco_varejo-preco_custo) * quantidade;
        lucroTotal += lucroDia;

        if(lucroDia > maiorLucro ){
            maiorLucro = lucroDia;
            dia_Mlucro = dia;
            produto_campeao = produto;
        }
     }
    }

    printf("Total de itens vendidos na semana: %d\n", total_vendido);
    printf("Lucro total da semana: %.2f\n", lucroTotal);
    printf("Dia de maior lucro de venda: Dia %d\n", dia_Mlucro);
    printf("Produto campeo da semana: Produto %d\n", produto_campeao);

    return 0;
}
