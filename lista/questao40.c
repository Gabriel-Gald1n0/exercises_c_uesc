#include <stdio.h>

void decimalParaRomano(int num) {
    // Arrays para representar os algarismos romanos
    char *simbolos[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C"};
    int valores[] = {1, 4, 5, 9, 10, 40, 50, 90, 100};

    // Variável para armazenar o número romano
    char numeroRomano[20] = "";

    int i = 8; // Começa com o maior valor romano

    while (num > 0) {
        // Verifica se o número decimal é maior ou igual ao valor romano atual
        if (num >= valores[i]) {
            strcat(numeroRomano, simbolos[i]); // Adiciona o símbolo romano
            num -= valores[i]; // Subtrai o valor decimal
        } else {
            i--; // Move para o próximo valor romano menor
        }
    }

    printf("%d em números romanos: %s\n", num, numeroRomano);
}

int main() {
    for (int i = 1; i <= 100; i++) {
        decimalParaRomano(i);
    }

    return 0;
}
