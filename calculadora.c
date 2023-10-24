#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  float valor1, valor2;
  int equacao = 0;
  bool opcao = true;

  printf("Digite o 1º valor: ");
  scanf("%f", &valor1);

  printf("Digite o 2° valor: ");
  scanf("%f", &valor2);

  while (opcao == true) {
    printf("\nDigite o tipo de Equacao\n soma = 1\n Subtracao = 2 \n Divisao = "
           "3\n "
           "Multiplicacao = 4\n Potencia = 5\n Raiz^2 = 6\n\nEscolha: ");
    scanf("%i", &equacao);

    if (equacao < 7 && equacao > 0) {
      if (equacao == 1) {
        float soma = valor1 + valor2;
        printf("\nSoma: %.2f + %.2f = %.2f", valor1, valor2, soma);
      } else if (equacao == 2) {
        float subt = valor1 - valor2;
        printf("\nSubtracao: %.2f - %.2f = %.2f", valor1, valor2, subt);
      } else if (equacao == 3) {
        float div = valor1 / valor2;
        printf("\nDivisao: %.2f/%.2f = %.2f", valor1, valor2, div);
      } else if (equacao == 4) {
        float mult = valor1 * valor2;
        printf("\nMultiplicacao: %.2f * %.2f = %.2f", valor1, valor2, mult);
      } else if (equacao == 5) {
        double resp_potencia1 = pow(valor1, 2);
        double resp_potencia2 = pow(valor2, 2);
        printf("\nPotencia Dos valores: %.2f^2 = %.2f, %.2f^2=%.2f", valor1,
               resp_potencia1, valor2, resp_potencia2);
      } else if (equacao == 6) {
        double raiz_valor1 = sqrt(valor1);
        double raiz_valor2 = sqrt(valor2);
        printf("\nRaiz Dos valores: √%.2f = %.2f, √%.2f=%.2f", valor1,
               raiz_valor1, valor2, raiz_valor2);
      }
      opcao = false;
    } else {
      printf("\nERRO!!! Digite um valor certo para efetuar a Equacao!!!\n");
    }
  }
  return 0;
}