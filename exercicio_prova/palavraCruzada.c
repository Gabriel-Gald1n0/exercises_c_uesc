#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define TAMANHO 10

// typedef se refere a pista e pista armazena as informações
typedef struct {
  char pergunta[100];
  char resposta[20];
  int linha, coluna;
  char direcao;
} Pista;

typedef struct {
    char resposta[20];
    int linha, coluna;
    char direcao;
} Resposta;

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
void completarPalavra(char tabuleiro[TAMANHO][TAMANHO], Pista pista, Resposta resposta) {
  int len = strlen(pista.resposta);
  char respostaUsuario[20];
  int valor = 1;

  printf("Complete a palavra para a pista: %s\n", pista.pergunta);

  do {
    printf("Insira a palavra: ");
    scanf("%s", respostaUsuario);
    /*
    if (strcmp(respostaUsuario, pista.resposta) == 0) {
      completarTabuleiro(valor);
      valor++;
    }*/

  } while (strcmp(respostaUsuario, resposta.resposta) != 0);

  for (int i = 0; i < len; i++) {
    // Atribuir a palavra correta ao tabuleiro
    if (pista.direcao == 'H') {
      tabuleiro[pista.linha][pista.coluna + i] = respostaUsuario[i];
    } else if (pista.direcao == 'V') {
      tabuleiro[pista.linha + i][pista.coluna] = respostaUsuario[i];
    }
  }
  imprimirTabuleiro(tabuleiro);
}

int main() {
  char tabuleiro[TAMANHO][TAMANHO];

  printf("Palavra Cruzada:\n");

  inicializarTabuleiro(tabuleiro);
  // Definindo apenas as pistas usando a struct Pista
  Pista pistas[] = {{"Pais na Europa", "p__t___l", 1, 0, 'H'},
                    {"Pais da America do Sul", "b___i_", 0, 2, 'V'},
                    {"Usado em sala de aula", "ap_g___r", 0, 0, 'V'},
                    {"Usado em veiculos", "g______a", 3, 0, 'H'}
    };

   Resposta respostas[] = {
        {"portugal", 1, 0, 'H'},
        {"brasil", 0, 2, 'V'},
        {"apagador", 0, 0, 'V'},
        {"gasolina", 3, 0, 'H'}
    };

  // Adicionando as pistas no tabuleiro
  for (int i = 0; i < sizeof(pistas) / sizeof(pistas[0]); i++) {
    adicionarPista(tabuleiro, pistas[i]);
  }

    imprimirTabuleiro(tabuleiro);

  // Completando as palavras para as pistas "Portugal" e "Brasil"
  for (int i = 0; i < sizeof(pistas) / sizeof(pistas[0]); i++) {
    completarPalavra(tabuleiro, pistas[i],respostas[i]);
  }


  return 0;
}

