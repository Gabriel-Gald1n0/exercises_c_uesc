#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>
#define N 10
#define P 3
#define MIN (0.0f)


double randf( double min, double max )
{
    return min + (rand() / ( RAND_MAX / ( max - min) ) ) ;
}

void apresentarNumeroRepetido(float array[], int n)
{
    float novoArray[N];
    int contador = 0;

    for(int i = 0; i < n; i++)
    {
        int repetido = 0;
        for(int j = 0; j < contador; j++){
            if(array[i] == array[j])
            {
                 printf("Valor %.2f encontrado nas linhas %d e %d\n", array[i], i, j);
                repetido = 1;
                break;
            }
        }

        if(!repetido)
        {
            novoArray[contador] = array[i];
            contador++;
        }
    }



    printf("\n");
    for(int i = 0; i < contador; i++)
    {
        printf("%d: %.2f\n", i, novoArray[i]);
    }

}

int main(int argc, char *argv[])
{
    float array[N];
    int maior[P] = {-1,-2,-3}, menor[P] = {N+1, N+2, N+3};
    int Pos_MaiorV[P], Pos_MenorV[P];
    float media = 0, mediana = 0, desvio_padrao = 0;
    srand(time(NULL));

    for(int i = 0; i < N; i++)
    {
        //array[i] = randf( MIN, N);
        array[i] = rand()%(N+1);
    }

    for(int i = 0; i < N; i++)
    {
        printf("%d: %.2f\n", i, array[i]);
    }

    apresentarNumeroRepetido(array, N);

 return 0;
}



