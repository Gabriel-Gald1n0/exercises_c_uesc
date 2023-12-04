#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int linha = 10;
  int coluna = 10;
  int i, j;

  int matriz[linha][coluna];

  for (i = 0; i < linha; i++) {
    for (j = 0; j < coluna; j++) {
      matriz[i][j] = i + j;
    }
  }

  for (i = 0; i < linha; i++) {
    printf("%i: ", i);
    for (j = 0; j < coluna; j++) {
      printf("[ %i ]", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
