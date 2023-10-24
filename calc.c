#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  float valor1, valor2, newValor, result;
  int equacao = 0;
  int verificador;
  verificador = 0;
  bool opcao = true;
  char continuar = 'n';

    printf("%c---------------------------Calculadora--------------------------%c\n", 42, 42);
  while(continuar == 'N' || continuar == 'n'){
    printf("%c Digite o 1%c valor: ", 124,167);
    scanf("%f", &valor1);

  do {
  printf("%c Digite o 2%c valor: ",124,167);
  scanf("%f", &valor2);
    printf("%c----------------------------------------------------------------%c",124,42);
    printf("\n| Digite o tipo de Equacao:\n| soma = 1\n| Subtracao = 2 \n| Divisao = "
           "3\n| "
           "Multiplicacao = 4\n|\n| Escolha: ");
    scanf("%i", &equacao);

    switch(equacao)
    {
        case 1:
            result= valor1 + valor2;
            printf("|\n| Soma:\n| %.2f + %.2f = %.2f", valor1, valor2,result );
            break;
        case 2:
            result= valor1 - valor2;
            printf("|\n| Subtracao:\n| %.2f - %.2f = %.2f", valor1, valor2, result);
            break;
        case 3:
            if (valor2 != 0) {
                result= valor1 / valor2;
                printf("|\n| Divisao:\n| %.2f/%.2f = %.2f", valor1, valor2, result);
            } else {
                printf("|\n| Erro: Divisao por zero.\n");
                result = valor1;
                verificador = 1;
            }
            break;
        case 4:
            result= valor1 * valor2;
            printf("|\n| Multiplicacao:\n| %.2f * %.2f = %.2f", valor1, valor2, result);
            break;
        default:
            printf("|\n| ERRO!!! Digite um valor certo para efetuar a Equacao!!!\n|");
            verificador = 1;
    }

    if( verificador == 0){
        valor1 = result;
        printf("\n| Deseja continuar com o mesmo resultado? (S/N): ");
        scanf(" %c", &continuar);
    } else
    {
        verificador = 0;
        continuar = 's';
    }

  }while (continuar == 'S' || continuar == 's');

    printf("|\n%c----------------------------------------------------------------%c",124,42);
    printf("\n| Deseja Encerrar (S/N): ");
    scanf(" %c", &continuar);
  }
   printf("%c-------------------------------FIM------------------------------%c",124,42);
  return 0;
}
