#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int linha = 5;
  int coluna = 3;
  int i, j;

  int matriz[linha][coluna];
    printf("Digite a nota: ");
  for (i = 0; i < linha; i++) {
    for (j = 0; j < coluna; j++) {
      scanf("%i", &matriz[i][j]);
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

