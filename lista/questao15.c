#include <stdio.h>
#include <math.h>

int main() {
    float x,y;

    printf("Digite os catetos de um triangulo retangulo: ");
    scanf("%f %f", &x, &y);

    float z = x*x + y*y;

    if( z <= 1.0)
    {
        printf("Esta dentro da circunferencia.");
    } else
        printf("Esta fora da circunferencia.");

    return 0;
}

