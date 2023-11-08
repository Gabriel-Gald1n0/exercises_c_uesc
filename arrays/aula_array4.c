#include <stdio.h>
#include <stdlib.h>


int main( int argc, char *argv[] ){
    int c[10];
    printf("Endereco do array %p\n", c);
    printf("Memoria alocada em bytes: %d\n", sizeof(c));

    return 0;
}

