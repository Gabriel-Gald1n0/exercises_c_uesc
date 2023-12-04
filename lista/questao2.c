#include <stdio.h>

int main() {
    char ch1, ch2, ch3;

    printf("Digite um caractere: ");
    scanf(" %c", &ch1);

    // Verificando o tipo de caractere digitado
    ch2 = 'Q'; // Caractere 81 em decimal, octal e hexadecimal

    if (ch1 >= 'A' && ch1 <= 'Z') {
        printf("O caractere digitado é uma letra maiúscula.\n");
    } else if (ch1 >= 'a' && ch1 <= 'z') {
        printf("O caractere digitado é uma letra minúscula.\n");
    } else if (ch1 >= '0' && ch1 <= '9') {
        printf("O caractere digitado é um dígito.\n");
    } else {
        printf("O caractere digitado é de outro tipo.\n");
    }

    printf("ch2 em formato decimal: %d\n", ch2);
    printf("ch2 em formato octal: %o\n", ch2);
    printf("ch2 em formato hexadecimal: %x\n", ch2);
    printf("ch2 como caractere: %c\n", ch2);

    if (ch1 >= 'A' && ch1 <= 'Z') {
        ch3 = ch1 + ('a' - 'A'); //está calculando o valor correspondente em minúsculas de um caractere maiúsculo.
        printf("\nch3 em formato decimal: %d\n", ch3);
        printf("ch3 em formato octal: %o\n", ch3);
        printf("ch3 em formato hexadecimal: %x\n", ch3);
        printf("ch3 como caractere: %c\n", ch3);
    }

    return 0;
}
