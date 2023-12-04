#include <stdio.h>

int main() {
    int a, b, c;

    for (a = 1; a <= 500; a++) {
        for (b = a; b <= 500; b++) {
            c = a * a + b * b;

            int raizC = 1;
            while (raizC * raizC < c) {
                raizC++;
            }

            if (raizC * raizC == c && raizC <= 500) {
                printf("(%d, %d, %d)\n", a, b, raizC);
            }
        }
    }

    return 0;
}
