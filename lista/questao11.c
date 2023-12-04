#include <stdio.h>

int main() {
    float x1, y1, x2, y2;
    float m, b;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    // Calcular a inclinação
    m = (y2 - y1) / (x2 - x1);

    // Calcular o intercepto y -> y = mx +b (isola o b) -> b = y - mx
    b = y1 - m * x1;

    printf("A equacao da reta que passa pelos pontos (%.2f, %.2f) e (%.2f, %.2f) e:\n", x1, y1, x2, y2);
    printf("y = %.2fx + %.2f\n", m, b);

    return 0;
}
