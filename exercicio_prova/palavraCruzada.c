#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define TAMANHO 10

// typedef se refere a pista e pista armazena as informações
typedef struct {
    char pergunta[100];
    char resposta[20];
    int linha, coluna;
    char direcao;
} Pista;

void imprimirTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

void inicializarTabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
    // Inclui letras iniciais reveladas

    // Copia as letras iniciais para o tabuleiro
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = '_';
        }
    }
}

void adicionarPista(char tabuleiro[TAMANHO][TAMANHO], Pista pista) {
    int len = strlen(pista.resposta);

    for (int i = 0; i < len; i++) {
        if (pista.direcao == 'H') {
            tabuleiro[pista.linha][pista.coluna + i] = pista.resposta[i];
        } else if (pista.direcao == 'V') {
            tabuleiro[pista.linha + i][pista.coluna] = pista.resposta[i];
        }
    }
}

// Função para completar uma palavra no tabuleiro letra por letra
void completarPalavra(char tabuleiro[TAMANHO][TAMANHO], Pista pista) {
    int len = strlen(pista.resposta);
    char respostaUsuario[20];

    printf("Complete a palavra para a pista: %s\n", pista.pergunta);

    do {
        printf("Insira a palavra: ");
        scanf("%s", respostaUsuario);
    } while (strcmp(respostaUsuario, pista.resposta) != 0);

    for (int i = 0; i < len; i++) {
        // Atribuir a palavra correta ao tabuleiro
        if (pista.direcao == 'H') {
            tabuleiro[pista.linha][pista.coluna + i] = respostaUsuario[i];
        } else if (pista.direcao == 'V') {
            tabuleiro[pista.linha + i][pista.coluna] = respostaUsuario[i];
        }
    }
}

int main() {
    char tabuleiro[TAMANHO][TAMANHO];
    char tabuleiroInicial[TAMANHO][TAMANHO] = {
        {'a', '_', 'b', '_', '_', '_', '_', '_', '_', '_'},
        {'p', '_', 'r', 't', '_', '_', 'l', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_', '_', '_'},
        {'g', 'a', '_', 'o', '_', '_', 'a', '_', '_', '_'},
        {'_', '_', 'i', '_', '_', '_', '_', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_', '_', '_'},
        {'o', '_', '_', '_', '_', '_', '_', '_', '_', '_'},
        {'r', '_', '_', '_', '_', '_', '_', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_', '_', '_'},
        {'_', '_', '_', '_', '_', '_', '_', '_', '_', '_'}
    };

    // Imprimindo tabuleiroInicial separadamente
    printf("Palavra Cruzada:\n");
    imprimirTabuleiro(tabuleiroInicial);

    inicializarTabuleiro(tabuleiro);
    // Definindo apenas as pistas usando a struct Pista
    Pista pistas[] = {
        {"Pais na Europa", "portugal", 1, 0, 'H'},
        {"Pais da America do Sul", "brasil", 0, 2, 'V'},
        {"Usado em sala de aula", "apagador", 0, 0, 'V'},
        {"Usado em veiculos", "gasolina", 3, 0, 'H'}
    };

    // Adicionando as pistas no tabuleiro
    for (int i = 0; i < sizeof(pistas) / sizeof(pistas[0]); i++) {
        adicionarPista(tabuleiro, pistas[i]);
    }

    // Completando as palavras para as pistas "Portugal" e "Brasil"
    for (int i = 0; i < sizeof(pistas) / sizeof(pistas[0]); i++) {
        completarPalavra(tabuleiro, pistas[i]);
    }

    // Imprimindo o tabuleiro final
    imprimirTabuleiro(tabuleiro);

    return 0;
}
