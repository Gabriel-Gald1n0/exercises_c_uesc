/*
Repita o problema anterior para valores float
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>
#define N 10
#define P 3
#define MIN (10.0f)

float calculaDesvioPadrao(float array[], float media, int n) {
    float desvio = 0;
    for (int i = 0; i < n; i++) {
        desvio += pow(array[i] - media, 2);
    }
    return sqrt(desvio / n);
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

void bubble_sort (float vetor[], int n) {
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

void apresentarValoresRepetidos(float array[], int n) {
    float media = 0, mediana = 0, desvio_padrao = 0;
    // Criar um array para armazenar a frequência de cada valor
    float novoArray[N];
    int index = 0;

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < index; j++) {
            if (array[i] == array[j]) {
                printf("numeros repetidos: %d: %.2f", i ,array[i]);
                break;
            }
        }

            if (j == index) {
            // Se não encontrou duplicatas, adiciona ao novo array
            novoArray[index++] = array[i];
        }

    }

    printf("Novo array sem repeticoes: \n");
    for (int i = 0; i < index; i++) {
        printf("%d: %.2f \n", i, novoArray[i]);
    }

    for(int i = 0; i < index; i++)
    {
        media = media + novoArray[i];
    }
    media /= index;
    printf("\nMedia: %.2f\n", media);

    bubble_sort(novoArray, index);
    mediana = calcularMedianaOrdenado(novoArray, index);

    printf("Mediana: %.2f\n", mediana);

    desvio_padrao = calculaDesvioPadrao(novoArray, media, index);
    printf("Desvio Padrao: %.2f\n", desvio_padrao);

}

int main(int argc, char *argv[])
{
    float array[N];
    float maior[P] = {-1,-2,-3}, menor[P] = {N+1, N+2, N+3};
    int Pos_MaiorV[P], Pos_MenorV[P];
    float media = 0, mediana = 0, desvio_padrao = 0;
    srand(time(NULL));

    for(int i = 0; i < N; i++)
    {
          array[i] = (float)rand() / RAND_MAX * MIN;
    }

    for(int i = 0; i < N; i++)
    {
        printf("%d: %.2f\n", i, array[i]);
    }

    for(int i = 0; i < N; i++)
    {
         if (array[i] > maior[0]) {
            maior[2] = maior[1];
            maior[1] = maior[0];
            maior[0] = array[i];
            Pos_MaiorV[2] = Pos_MaiorV[1];
            Pos_MaiorV[1] = Pos_MaiorV[0];
            Pos_MaiorV[0] = i;
        } else if (array[i] > maior[1]) {
            maior[2] = maior[1];
            maior[1] = array[i];
            Pos_MaiorV[2] = Pos_MaiorV[1];
            Pos_MaiorV[1] = i;
        } else if (array[i] > maior[2]) {
            maior[2] = array[i];
            Pos_MaiorV[2] = i;
        }

        if (array[i] < menor[0]) {
            menor[2] = menor[1];
            menor[1] = menor[0];
            menor[0] = array[i];
            Pos_MenorV[2] = Pos_MenorV[1];
            Pos_MenorV[1] = Pos_MenorV[0];
            Pos_MenorV[0] = i;
        } else if (array[i] < menor[1]) {
            menor[2] = menor[1];
            menor[1] = array[i];
            Pos_MenorV[2] = Pos_MenorV[1];
            Pos_MenorV[1] = i;
        } else if (array[i] < menor[2]) {
            menor[2] = array[i];
            Pos_MenorV[2] = i;
        }

    }

    printf("\nos 3 Maiores Numeros\n");
    for(int j=0; j<P; j++)
    {
       printf("%d: %.2f\n",Pos_MaiorV[j],maior[j]);
    }

    printf("\nos 3 Menores Numeros\n");
    for(int j=0; j<P; j++)
    {
        printf("%d: %.2f\n",Pos_MenorV[j], menor[j]);
    }

    for(int i = 0; i < N; i++)
    {
        media = media + array[i];
    }
    media /= N;

    // reorganizar vetor
    bubble_sort(array,N);
    //vetor ordenado
    printf("\nvetor ordenado:\n");
    for(int i = 0; i < N; i++)
    {
        printf("%d: %.2f\n", i, array[i]);
    }

    mediana = calcularMedianaOrdenado(array, N);

    printf("\nMedia: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);

    // Calcular o desvio padrão
    desvio_padrao = calculaDesvioPadrao(array, media, N);
    printf("Desvio Padrao: %.2f\n", desvio_padrao);

    // Apresentar informações sobre valores repetidos
    apresentarValoresRepetidos(array, N);

 return 0;
}

