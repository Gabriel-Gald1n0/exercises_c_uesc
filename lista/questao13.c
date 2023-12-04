#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  float valor_a, valor_b, valor_c;
  float delta;
  float raiz_1, raiz_2;
  char valida_delta[90];
  float x, px;
  int i = 0; // verifica se o delta existe

  printf("Funcao: f(X) = ax^2+ bx + c\n");

  printf("Digite o valor de a: ");
  scanf("%f", &valor_a);

  printf("Digite o valor de b: ");
  scanf("%f", &valor_b);

  printf("Digite o valor de c: ");
  scanf("%f", &valor_c);

  delta = valor_b * valor_b - 4 * valor_a * valor_c;
  double raiz_delta = sqrt(delta);

  if (delta > 0) {
    strcpy(valida_delta, " Delta > 0, 2 raizes IR ≠\n");
  } else if (delta == 0) {
    strcpy(valida_delta, " Delta = 0, 1 raizes IR =\n");
  } else if (delta < 0) {
    strcpy(valida_delta, " Delta < 0, 0 raizes IR ou sem\n");
    i = 3;
  }

  raiz_1 = (-valor_b + raiz_delta) / 2 * valor_a;
  raiz_2 = (-valor_b - raiz_delta) / 2 * valor_a;

  printf("Digite um valor para x: ");
  scanf("%f", &x);

    // Calcular p(x)
  px = valor_a * x * x + valor_b * x + valor_c;


  printf("\n-------------CALCULO---------------\n");
  printf("f(x) =  %.2fx^2 + %.2fx + %.2f\n", valor_a, valor_b, valor_c);
  printf(" Delta = %.2f\n", delta);
  printf("%s",valida_delta);
  if(i == 0){
  printf("Raizes:\n");
  printf(" x' = %.2f\n", raiz_1);
  printf(" x'' = %.2f\n", raiz_2);
  }
  printf("O valor de p(x) para x=%.2f e: %.2f\n", x, px);
  printf("-----------------------------------");

  return 0;
}
