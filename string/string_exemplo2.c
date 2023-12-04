#include <stdio.h>

#define N 50

int main() {

  char frase[N];
  int i = 0;

  printf("Digite a frase: ");
  fgets(frase, N, stdin);

  printf("Voce digitou: \n");
  while (frase[i] != '\0') {
    if (frase[i++] != ' ') {
      putchar(frase[i - 1]);
    } else
      putchar('\n');
  }
  return 0;
}
