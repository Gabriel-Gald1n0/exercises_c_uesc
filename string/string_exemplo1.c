#include <stdio.h>
#include <stdlib.h>
#define N 10

int main() {
  char cor[N];
  int i = 0;

  printf("digite uma cor: ");
  scanf("%s", &cor);

  printf("Cor: %s\n", cor);

  for (i = 0; i < strlen(cor); i++) {
    printf("%c\n", cor[i]);
  }

  /*
  while (cor[i] != '\0') {
    printf("%c\n", cor[i++]);
  }
*/

  printf("Voce digitou '%s'", cor);
  return 0;
}
