#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50

int main( int argc, char *argv[])
{
    struct pessoa{
        char nome[N];
        char snome[N];
        int idade;
    };

    struct pessoa myPessoa;
    printf("\n----------------- Cadastro -----------------\n");
    printf("Nome......: ");
    fflush(stdin);
    //__fpurge(stdin);
    fgets( myPessoa.nome, N, stdin);
    myPessoa.nome[strlen(myPessoa.nome) - 1] = 0;

    printf("Sobrenome.: ");
    fflush(stdin);
    //__fpurge(stdin);
    fgets(myPessoa.snome, N, stdin);
    myPessoa.snome[strlen(myPessoa.snome)- 1] = 0;// como \0 é o ultimo ente  diminui 1 para tirar o enter ordem (enter, \0)

    printf("Idade.....: ");
    fflush(stdin);
    //__fpurge(stdin);
    scanf("%i", &myPessoa.idade);

    printf("\n----------------- Show Cadastro -----------------\n");
    printf("Nome..: %s %s\n", myPessoa.nome, myPessoa.snome);
    printf("Idade.: %i\n", myPessoa.idade);


    return 0;
}
