#include <stdio.h>
#include <math.h>

int main() {
    float lado_q;

    printf("Digite o valor do lado: ");
    scanf("%f", &lado_q);

    float diagonal = lado_q * sqrt(2);

    float perimetro = 4*lado_q;

    float area = lado_q * lado_q;

    printf("Sua diagonal: %f\n",diagonal);
    printf("Seu perimetro: %2.f\n",perimetro);
    printf("Sua area: %2.f\n",area);



    return 0;
}

