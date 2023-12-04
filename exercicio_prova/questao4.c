#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N 10
#define P 3
#define MIN (10.0f)

float calculaDesvioPadrao(float array[N], float media, int n) {
    float desvio = 0;
    for (int i = 0; i < n; i++) {
            desvio += pow(array[i] - media, 2);

    }
    return sqrt(desvio / n*N);
}

float calcularMedianaOrdenado(float array[], int n) {
    float mediana = 0;
    if (n % 2 == 0) {
        mediana = (array[n / 2 - 1] + array[n / 2]) / 2.0;
    } else {
        mediana = array[n / 2];
    }
    return mediana;
}

void bubble_sort(float vetor[], int n) {
    int k, j;
    float aux;

    for (k = 0; k <= n - 1; k++) {
        for (j = 0; j < n - k - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

void apresentarValoresRepetidos(float array[][N], int n) {
    float media = 0, mediana = 0, desvio_padrao = 0;
    // Criar um array para armazenar a frequência de cada valor
    float novoArray[N * N];
    int index = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < N; j++) {
            int encontrado = 0;

            for (int k = 0; k < index; k++) {
                if (array[i][j] == novoArray[k]) {
                    printf("numeros repetidos: [%d][%d]: %.2f", i,j ,array[i][j]);
                    encontrado = 1;
                    break;
                }
            }

            if (!encontrado) {
                // Se não encontrou duplicatas, adiciona ao novo array
                novoArray[index++] = array[i][j];
            }
        }
    }

    printf("Novo Array:\n");
    for (int i = 0; i < index; i++) {
        printf("[%d]: %.2f\n",i, novoArray[i]);
    }
    printf("\n");

    for (int i = 0; i < index; i++) {
        media += novoArray[i];
    }
    media /= index;
    printf("\nMedia: %.2f\n", media);

    bubble_sort(novoArray, index);
    mediana = calcularMedianaOrdenado(novoArray, index);

    printf("Mediana: %.2f\n", mediana);

    desvio_padrao = calculaDesvioPadrao(novoArray, media, index);
    printf("Desvio Padrao: %.2f\n", desvio_padrao);
}

int main(int argc, char *argv[]) {
    float array[N][N];
    float maior[P] = {-1, -2, -3}, menor[P] = {N + 1, N + 2, N + 3};
    int Pos_MaiorV[P][2], Pos_MenorV[P][2];
    float media = 0, mediana = 0, desvio_padrao = 0;
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            array[i][j] = (float)rand() / RAND_MAX * MIN;
        }
    }

    printf("Matriz normal:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("[%d][%d]: %.2f\n",i,j, array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (array[i][j] > maior[0]) {
                maior[2] = maior[1];
                maior[1] = maior[0];
                maior[0] = array[i][j];
                Pos_MaiorV[2][0] = Pos_MaiorV[1][0];
                Pos_MaiorV[1][0] = Pos_MaiorV[0][0];
                Pos_MaiorV[0][0] = i;
                Pos_MaiorV[2][1] = Pos_MaiorV[1][1];
                Pos_MaiorV[1][1] = Pos_MaiorV[0][1];
                Pos_MaiorV[0][1] = j;
            } else if (array[i][j] > maior[1]) {
                maior[2] = maior[1];
                maior[1] = array[i][j];
                Pos_MaiorV[2][0] = Pos_MaiorV[1][0];
                Pos_MaiorV[1][0] = i;
                Pos_MaiorV[2][1] = Pos_MaiorV[1][1];
                Pos_MaiorV[1][1] = j;
            } else if (array[i][j] > maior[2]) {
                maior[2] = array[i][j];
                Pos_MaiorV[2][0] = i;
                Pos_MaiorV[2][1] = j;
            }

            if (array[i][j] < menor[0]) {
                menor[2] = menor[1];
                menor[1] = menor[0];
                menor[0] = array[i][j];
                Pos_MenorV[2][0] = Pos_MenorV[1][0];
                Pos_MenorV[1][0] = Pos_MenorV[0][0];
                Pos_MenorV[0][0] = i;
                Pos_MenorV[2][1] = Pos_MenorV[1][1];
                Pos_MenorV[1][1] = Pos_MenorV[0][1];
                Pos_MenorV[0][1] = j;
            } else if (array[i][j] < menor[1]) {
                menor[2] = menor[1];
                menor[1] = array[i][j];
                Pos_MenorV[2][0] = Pos_MenorV[1][0];
                Pos_MenorV[1][0] = i;
                Pos_MenorV[2][1] = Pos_MenorV[1][1];
                Pos_MenorV[1][1] = j;
            } else if (array[i][j] < menor[2]) {
                menor[2] = array[i][j];
                Pos_MenorV[2][0] = i;
                Pos_MenorV[2][1] = j;
            }
        }
    }

    printf("\nOs 3 Maiores Numeros:\n");
    for (int j = 0; j < P; j++) {
        printf("[%d][%d]: %.2f\n", Pos_MaiorV[j][0], Pos_MaiorV[j][1], maior[j]);
    }

    printf("\nOs 3 Menores Numeros:\n");
    for (int j = 0; j < P; j++) {
        printf("[%d][%d]: %.2f\n", Pos_MenorV[j][0], Pos_MenorV[j][1], menor[j]);
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            media = media + array[i][j];
        }
    }
    media /= (N * N);

    // reorganizar vetor
    bubble_sort(array[0], N * N);

    // vetor ordenado
    printf("\nVetor ordenado:\n");
    for (int i = 0; i < N * N; i++) {
        printf("[%d][%d]: %.2f\n", i / N, i % N, array[0][i]);
    }

    mediana = calcularMedianaOrdenado(array[0], N * N);

    printf("\nMedia: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);

    // Calcular o desvio padrão
    desvio_padrao = calculaDesvioPadrao(array, media, N);
    printf("Desvio Padrao: %.2f\n", desvio_padrao);

    // Apresentar informações sobre valores repetidos
    apresentarValoresRepetidos(array, N);

    return 0;
}
