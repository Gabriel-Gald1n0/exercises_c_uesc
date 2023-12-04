#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<time.h>
#define N 10
#define P 20
#define O 5



int main(int argc, char *argv[])
{
    int array[N][P][O];
    int contador = 0;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < P; j++)
         {
           for(int k = 0; k < O; k++)
         {
            array[i][j][k] = contador++;
         }
        }
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < P; j++)
         {
           for(int k = 0; k < O; k++)
         {
            printf("[%d][%d][%d]: %d\n", i,j,k, array[i][j][k]);
         }
        }
    }

 return 0;
}
