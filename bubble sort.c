#include <stdio.h>
#define N 6

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Troca os elementos se estiverem fora de ordem
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    printf("Array antes do Bubble Sort:\n");
    for (int i = 0; i <= N; i++) {
        printf("%d: %d\n",i, arr[i]);
    }

    // Chama a função de ordenação
    bubbleSort(arr, N);

    printf("\nArray depois do Bubble Sort:\n");
    for (int i = 0; i <= N; i++) {
         printf("%d: %d\n",i, arr[i]);
    }

    return 0;
}
