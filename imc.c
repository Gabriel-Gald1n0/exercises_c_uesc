#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(void){
    float peso,IMC;
    float altura;
    char sexo,sexo_nome[11];
    char resposta_IMC[90];
    char pesoIdeal[90];
    int idade;
    bool opcao = true;

    while(opcao == true){

    printf(" OBS:\n Masculino = m\n Feminino = f\n");
    printf(" Digite seu Sexo: ");
    scanf(" %c",&sexo);//  espaço em branco antes do %c para ignorar espaços em branco e quebras de linha

    if (sexo != 'm' && sexo != 'f') {
            printf("Sexo invalido!, Por favor, digite 'm' para masculino ou 'f' para feminino.\n");
            continue;
        }

    printf(" Digite sua Idade: ");
    scanf(" %i",&idade);

     if (idade <= 0){
            printf("Idade deve ser maior que zero!\n");
            continue;
        }

    printf(" Digite sua Altura: ");
    scanf(" %f",&altura);

     if (altura <= 0) {
            printf("Altura deve ser maior que zero!\n");
            continue;
        }

    printf(" Digite seu Peso: ");
    scanf(" %f",&peso);

     if (peso <= 0) {
            printf("peso deve ser maior que zero!\n");
            continue;
        }
        opcao = false;
    }

    IMC = peso/(altura * altura); // Calculo do Indice de Massa Corporal

    if (sexo == 'm') {
        if (altura < 1.55) {
            strcpy(pesoIdeal, "45 - 54 kg");
        } else if (altura >= 1.55 && altura < 1.60) {
            strcpy(pesoIdeal, "48 - 62 kg");
        } else if (altura >= 1.60 && altura < 1.65) {
            strcpy(pesoIdeal, "51 - 66 kg");
        } else if (altura >= 1.65 && altura < 1.70) {
            strcpy(pesoIdeal, "54 - 70 kg");
        } else if (altura >= 1.70 && altura < 1.75) {
            strcpy(pesoIdeal, "61 - 79 kg");
        } else if (altura >= 1.75 && altura < 1.80) {
            strcpy(pesoIdeal, "65 - 85 kg");
        } else if (altura >= 1.80 && altura < 1.85) {
            strcpy(pesoIdeal, "70 - 91 kg");
        } else if (altura >= 1.85 && altura < 1.90) {
            strcpy(pesoIdeal, "75 - 97 kg");
        } else {
            strcpy(pesoIdeal, "98 - 108 kg");
        }
    } else if (sexo == 'f') {
       if (altura < 1.45) {
            strcpy(pesoIdeal, "41 - 51 kg");
        } else if (altura >= 1.45 && altura < 1.50) {
            strcpy(pesoIdeal, "44 - 55 kg");
        } else if (altura >= 1.50 && altura < 1.55) {
            strcpy(pesoIdeal, "47 - 58 kg");
        } else if (altura >= 1.55 && altura < 1.60) {
            strcpy(pesoIdeal, "50 - 61 kg");
        } else if (altura >= 1.60 && altura < 1.65) {
            strcpy(pesoIdeal, "53 - 65 kg");
        } else if (altura >= 1.65 && altura < 1.70) {
            strcpy(pesoIdeal, "56 - 69 kg");
        } else if (altura >= 1.70 && altura < 1.75) {
            strcpy(pesoIdeal, "59 - 73 kg");
        } else if (altura >= 1.75 && altura < 1.80) {
            strcpy(pesoIdeal, "62 - 77 kg");
        } else if (altura >= 1.80 && altura < 1.85) {
            strcpy(pesoIdeal, "65 - 81 kg");
        } else if (altura >= 1.85 && altura < 1.90) {
            strcpy(pesoIdeal, "68 - 85 kg");
        } else {
            strcpy(pesoIdeal, "86 - 96 kg");
        }
    }

    if(IMC < 18.5){
        strcpy(resposta_IMC, "Abaixo do Peso");
    }else if(IMC >= 18.5 && IMC < 24.9){
        strcpy(resposta_IMC, "Peso Normal");
    }else if(IMC >= 24.9 && IMC < 29.9){
        strcpy(resposta_IMC, "Sobrepeso");
    }else if(IMC >= 30 && IMC < 34.9){
        strcpy(resposta_IMC, "Obesidade Classe I");
    }else if(IMC >= 35 && IMC < 39.9){
        strcpy(resposta_IMC, "Obesidade Classe II");
    }else
        strcpy(resposta_IMC, "Obesidade Classe III");

    printf("\n-------------CALCULO DO IMC---------------\n");
    if(sexo == 'm'){
    printf(" Sexo: Masculino\n");
    }else
        printf(" Sexo: Feminino\n");
    printf(" Idade: %i\n", idade);
    printf(" Altura: %.2f m\n",altura);
    printf(" Peso: %.2fKG\n\n", peso);
    printf(" IMC: %.2f\n",IMC);
    printf(" %s\n",resposta_IMC);
    printf(" Peso Ideal: %s (KG)\n",pesoIdeal);
    printf("------------------------------------------");

    return 0;
}
