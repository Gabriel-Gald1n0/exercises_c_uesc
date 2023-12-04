#include <stdio.h> // teste
#include <stdlib.h>
#include <time.h>

int main() {
    int nMatricula, numeroAleatorio;
    int tamanhoLista = 48;

    printf("Digite o numero de matricula: ");
    scanf("%d", &nMatricula);

    srand(nMatricula);
    numeroAleatorio = rand() % tamanhoLista + 1;

    printf("Atividade sorteada: %d\n", numeroAleatorio);

    return 0;
}
