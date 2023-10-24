#include <stdio.h>
#include <string.h>

// Função para converter um número de 0 a 999 em palavras usando switch-case
void numeroPorExtenso(int numero, char *extenso) {
    extenso[0] = '\0'; // Inicializa a string vazia

    if (numero == 0) {
        strcat(extenso, "zero");
        return;
    }

    int milhares = numero / 1000;
    int centenas = (numero % 1000) / 100;
    int dezenas = (numero % 100) / 10;
    int unidades = numero % 10;

    switch (milhares) {
        case 1:
            strcat(extenso, "mil");
            break;
        case 2:
            strcat(extenso, "dois mil");
            break;
        case 3:
            strcat(extenso, "três mil");
            break;
        case 4:
            strcat(extenso, "quatro mil");
            break;
        case 5:
            strcat(extenso, "cinco mil");
            break;
        case 6:
            strcat(extenso, "seis mil");
            break;
        case 7:
            strcat(extenso, "sete mil");
            break;
        case 8:
            strcat(extenso, "oito mil");
            break;
        case 9:
            strcat(extenso, "nove mil");
            break;
    }

    if (milhares > 0) {
    if (centenas > 0 || dezenas > 0 || unidades > 0) {
        strcat(extenso, " e ");
        }
    }

    switch (centenas) {
        case 1:
            strcat(extenso, "cento"); // strcat uso para concatenar as strings
            break;
        case 2:
            strcat(extenso, "duzentos");
            break;
        case 3:
            strcat(extenso, "trezentos");
            break;
        case 4:
            strcat(extenso, "quatrocentos");
            break;
        case 5:
            strcat(extenso, "quinhentos");
            break;
        case 6:
            strcat(extenso, "seiscentos");
            break;
        case 7:
            strcat(extenso, "setecentos");
            break;
        case 8:
            strcat(extenso, "oitocentos");
            break;
        case 9:
            strcat(extenso, "novecentos");
            break;
    }

    if (centenas > 0 && (dezenas > 0 || unidades > 0)) {
        strcat(extenso, " e ");
    } else if (centenas > 0) {
        return;
    }

    switch (dezenas) {
        case 1:
            if (unidades == 0) strcat(extenso, "dez");
            else if (unidades == 1) strcat(extenso, "onze");
            else if (unidades == 2) strcat(extenso, "doze");
            else if (unidades == 3) strcat(extenso, "treze");
            else if (unidades == 4) strcat(extenso, "catorze");
            else if (unidades == 5) strcat(extenso, "quinze");
            else if (unidades == 6) strcat(extenso, "dezesseis");
            else if (unidades == 7) strcat(extenso, "dezessete");
            else if (unidades == 8) strcat(extenso, "dezoito");
            else if (unidades == 9) strcat(extenso, "dezenove");
            return;
        case 2:
            strcat(extenso, "vinte");
            break;
        case 3:
            strcat(extenso, "trinta");
            break;
        case 4:
            strcat(extenso, "quarenta");
            break;
        case 5:
            strcat(extenso, "cinquenta");
            break;
        case 6:
            strcat(extenso, "sessenta");
            break;
        case 7:
            strcat(extenso, "setenta");
            break;
        case 8:
            strcat(extenso, "oitenta");
            break;
        case 9:
            strcat(extenso, "noventa");
            break;
    }

    if (dezenas > 0 && unidades > 0) {
        strcat(extenso, " e ");
    } else if (dezenas > 0) {
        return;
    }

    switch (unidades) {
        case 1:
            strcat(extenso, "um");
            break;
        case 2:
            strcat(extenso, "dois");
            break;
        case 3:
            strcat(extenso, "tres");
            break;
        case 4:
            strcat(extenso, "quatro");
            break;
        case 5:
            strcat(extenso, "cinco");
            break;
        case 6:
            strcat(extenso, "seis");
            break;
        case 7:
            strcat(extenso, "sete");
            break;
        case 8:
            strcat(extenso, "oito");
            break;
        case 9:
            strcat(extenso, "nove");
            break;
    }
}

int main() {
    int numero;
    char extenso[10000];
    char continuar;

     do {
    for (int i = 0; i < 50; i++) { printf("%c", 95); }
    printf("\n");

    printf("| Digite um numero entre 0 e 9999: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 9999) {
        printf("| Numero fora do intervalo valido.\n");
    } else {
        numeroPorExtenso(numero, extenso);
        printf("| Numero por extenso: %s\n", extenso);
    }

    printf("| Deseja converter outro numero? (S/N): ");
    scanf(" %c", &continuar);

    for (int i = 0; i < 50; i++) { printf("%c", 45); }
    printf("\n");

     }while(continuar == 'S' || continuar == 's');

    return 0;
}
