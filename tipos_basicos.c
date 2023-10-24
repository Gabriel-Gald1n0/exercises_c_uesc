#include <math.h>
#include <stdio.h>


int main() {
  int valor1, valor2;

  printf("Digite o 1° valor: ");
  scanf("%i", &valor1);

  printf("Digite o 2° valor: ");
  scanf("%i", &valor2);

  int resp_soma = valor1 + valor2;
  int resp_sub = valor1 - valor2;
  int resp_mult = valor1 * valor2;
  float resp_div = (float)valor1 / (float)valor2;

  double resp_potencia1 = pow(valor1,2);
  double resp_potencia2 = pow(valor2,2);

  double resp_raiz1 = sqrt(valor1);
  double resp_raiz2 = sqrt(valor2);
  
  printf("\n");
  printf("resposta Soma = %x\n", resp_soma);
  printf("resposta Subtracao = %i\n", resp_sub);
  printf("resposta Multiplicacao = %i\n", resp_mult);
  printf("resposta Divisao = %.2f\n", resp_div);
  printf("\n");

  printf("resposta valor1^2 = %.2f\n", resp_potencia1);
  printf("resposta valor1^2 = %.2f\n", resp_potencia2);
  printf("\n");
  
  printf("resposta raiz de valor1 = %.2f\n", resp_raiz1);
  printf("resposta raiz de valor1 = %.2f\n", resp_raiz2);
  
  return 0;
}