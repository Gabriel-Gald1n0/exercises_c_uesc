#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c;

    printf("Digite os valores de a, b, c: ");
    scanf("%d %d %d", &a, &b , &c);

    if( a != 0 && b != 0 && c !=0)
    {
        if( b * b + c * c == a * a || a * a + b * b == c * c || a * a + c * c == b * b)
        {
            printf("Os lados %d, %d e %d formam um triangulo retangulo.\n", a, b, c);
        }else{
           printf("Esses lados nao formam um triangulo retangulo.\n");
        }
    } else
        printf("Coloque numeros diferentes de 0.");

    return 0;
}
