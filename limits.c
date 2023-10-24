#include <limits.h>
#include <stdio.h>

int main(void) {
  printf("Number of byts: %d\n", sizeof(int));
  printf("Number of byts: %d\n", sizeof(long int));
  printf("Number of byts: %d\n", sizeof(double));
  printf("Number of byts: %d\n", sizeof(long double));
  printf("Number of byts: %d\n", sizeof(float));
  printf("Number of byts: %d\n\n", sizeof(char));

  printf("INT_MAX :%d\n", INT_MAX);
  printf("INT_MIN :%d\n\n", INT_MIN);

  printf("Number of byts: %d\n", sizeof(unsigned int));
  printf("UINT_MAX :%d\n", (unsigned int)UINT_MAX);
  return 0;
}