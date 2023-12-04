#include <stdio.h>
#include <math.h>

int main() {
    int b,c;
    float a;

    printf("Digite os catetos de um triangulo retangulo: ");
    scanf("%i %i", &b, &c);

    a = (float)(sqrt((b*b + c*c)));

    float perimetro = (float)(a + b + c);
    float area = (float)((b*c)/2);

    printf("Hipotenusa: %.2f\n",a*a);
    printf("perimetro: %.2f\n",perimetro);
    printf("area: %.2f\n",area);


    return 0;
}
