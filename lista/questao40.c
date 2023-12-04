#include <stdio.h>

void decimalParaRomano(int num) {
    // Arrays para representar os algarismos romanos
    char *simbolos[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C"};
    int valores[] = {1, 4, 5, 9, 10, 40, 50, 90, 100};

    // Vari�vel para armazenar o n�mero romano
    char numeroRomano[20] = "";

    int i = 8; // Come�a com o maior valor romano

    while (num > 0) {
        // Verifica se o n�mero decimal � maior ou igual ao valor romano atual
        if (num >= valores[i]) {
            strcat(numeroRomano, simbolos[i]); // Adiciona o s�mbolo romano
            num -= valores[i]; // Subtrai o valor decimal
        } else {
            i--; // Move para o pr�ximo valor romano menor
        }
    }

    printf("%d em n�meros romanos: %s\n", num, numeroRomano);
}

int main() {
    for (int i = 1; i <= 100; i++) {
        decimalParaRomano(i);
    }

    return 0;
}
