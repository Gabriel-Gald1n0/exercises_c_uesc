#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ARRAY_SIZE 10

// Função para remover elementos duplicados de um array
int removeDuplicates(int *arr, int size) {
    int index = 0;

    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < index; j++) {
            if (arr[i] == arr[j]) {
                printf("Valor repetido: %d\n", arr[i]);
                break;
            }
        }

        if (j == index) {
            // Se não encontrou duplicatas, adiciona ao novo array
            arr[index++] = arr[i];
        }
    }

    return index;
}

int main() {
    int array[ARRAY_SIZE];
  srand(time(NULL));

    // Preencher array randomicamente entre 0 e 1000
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = rand()%(ARRAY_SIZE  + 1);
    }//(float)rand() / RAND_MAX * 10.0f

    printf("normal\n");
     for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d: %d \n",i, array[i]);
    }
    printf("\n");

    //Remover números duplicados
    int newSize = removeDuplicates(array, ARRAY_SIZE);

    // Exibir array sem elementos duplicados
    printf("\nNovo array sem repeticoes: \n");
    for (int i = 0; i < newSize; i++) {
        printf("%d \n", array[i]);
    }
    printf("\n");

    return 0;
}
