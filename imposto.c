#include <math.h>
#include <stdio.h>

int main(void) {
  float salario_bruto = 0, salario_liquido = 0, vale_alimentacao = 0; 
  float taxa_IRRF = 0; 
  printf("Digite o seu Salario Bruto: "); // escrever seu salario bruto
  scanf("%f", &salario_bruto); // inserir salario bruto

  printf("Digite o valor do seu vale alimentacao: "); // escrever seu vale alimentacao
  scanf("%f", &vale_alimentacao); // inserir vale alimentacao

  if (salario_bruto <= 1900) { // se salario for menor ou igual 1900
    salario_liquido = salario_bruto + vale_alimentacao; // somar salario bruto + vale alimentacao, isso e igual a salario liquido
  } 
  else if (salario_bruto > 1900 && salario_bruto <= 2800) { //se nao se salario bruto maior 1900 e menor ou igual 2800
    taxa_IRRF = salario_bruto * 7.5 / 100; // taxa sera igual ao salario bruto x 7.5% de imposto
  } 
  else if (salario_bruto > 2800 && salario_bruto <= 3750) { //se nao se salario bruto maior 2800 e menor ou igual 3750
    taxa_IRRF = salario_bruto * 15 / 100; //taxa sera igual ao salario bruto x 15% de imposto
  } 
  else if (salario_bruto > 3750 && salario_bruto <= 4664) {//se nao se salario bruto maior 3750 e menor ou igual 4664
    taxa_IRRF = salario_bruto * 22.5 / 100; //taxa sera igual ao salario bruto x 22.5% de imposto
  }
  else if (salario_bruto > 4664) { // se salario for maior 4664
    taxa_IRRF = salario_bruto * 27.5 / 100; //taxa sera igual ao salario bruto x 27.5% de imposto
  }

  salario_liquido = (salario_bruto - taxa_IRRF) + vale_alimentacao;// subtrair taxa do salario bruto e depois somar com vale alimentacao, isso é igual a salario liquido
  
  printf("\n---------Salario Liquido-----------\n");
  printf("Salario Bruto: %.2f\n",salario_bruto); // mostrar salario bruto
  printf("Taxas IRRF: %.2f\n", taxa_IRRF); //mostrar taxa
  printf("Vale alimentacao: %.2f\n", vale_alimentacao); // mostrar vale alimentacao
  printf("Seu salario liquido = %.2f\n", salario_liquido); // mostrar salario liquido
  printf("---------------------------------------");


  return 0;
}