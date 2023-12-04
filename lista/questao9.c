#include <stdio.h>
#include <math.h>

int main() {
    float x, y, z;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o valor de y: ");
    scanf("%f", &y);

      // Determinar em que lado da curva o ponto (x, y) se encontra
    if (x > 0 && y > 0) {
        printf("O ponto (%.2f, %.2f) esta no primeiro quadrante (direita e acima da curva).\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("O ponto (%.2f, %.2f) esta no segundo quadrante (esquerda e acima da curva).\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("O ponto (%.2f, %.2f) esta no terceiro quadrante (esquerda e abaixo da curva).\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("O ponto (%.2f, %.2f) esta no quarto quadrante (direita e abaixo da curva).\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("O ponto (%.2f, %.2f) esta no centro de coordenadas (na curva).\n", x, y);
    } else {
        printf("O ponto (%.2f, %.2f) esta em um dos eixos (na curva).\n", x, y);
    }

    // Calcular a distância euclidiana do ponto (x, y) ao centro de coordenadas *pitagoras*
    z = sqrt(x * x + y * y);
    printf("\nA distancia euclidiana do ponto ao centro e: %.2f\n", z);

    // Calcular o produto entre x e y e imprimir em notação científica
    z = x * y;
    printf("\nO produto entre x e y em notacao cientifica: %.2e\n", z);

    return 0;
}

