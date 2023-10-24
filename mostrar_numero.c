#include <stdio.h>
#include <math.h>

int main(void) {
  
  int a = 2;
  double a2 = pow(a,2);
  double raiz_a = sqrt(a2);
  
  printf("a^2 = %.2f, raiz de a = %.2f\n",a2,raiz_a);
   
  int soma = a + 2;
  int subt = a - 2;
  int subt2 = a - 3;
  int mult = (a + 2) * 3;
  float div = (float)a/4 * 3;
  
  printf("soma = %i \nsubt = %i \nsubt2 = %i \nmult = %i \ndiv = %.2f",soma,subt,subt2,mult,div);
  printf("\n%.2f",(2.0/4.0)*3);
  
  int primeira = a + 2;
  printf("\nprimeira = %i",primeira);
  return 0;
}