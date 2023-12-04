#include <stdio.h>
#include <stdlib.h>

int main() {
    int cha;

    printf("Digite o 1 numero: ");
    scanf("%i", &cha);

    if(cha < 0){
        cha = cha * (-1);
    }

    if (cha >= 32 && cha <= 126) {
        printf("Caractere em formato decimal: %d\n", cha);
        printf("Caractere em formato octal: %o\n", cha);
        printf("Caractere em formato hexadecimal: %x\n", cha);
        printf("Caractere: %c\n", cha);
    }else if (cha < 32) {
        cha = 32;
        printf("Caractere em formato decimal: %d\n", cha);
        printf("Caractere em formato octal: %o\n", cha);
        printf("Caractere em formato hexadecimal: %x\n", cha);
        printf("Caractere: %c\n", cha);
    }else if (cha > 127) {
        cha = cha % 128; /// garante ta dentro do intervalo se cha = 128 ent será 0 se for 129 resultara em 1
        printf("Caractere em formato decimal: %d\n", cha);
        printf("Caractere em formato octal: %o\n", cha);
        printf("Caractere em formato hexadecimal: %x\n", cha);
        printf("Caractere: %c\n", cha);
    }
    return 0;
}
