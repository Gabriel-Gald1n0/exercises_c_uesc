#include <stdio.h>

int main(){
    int numeroConta = 1;
    float saldoDevedor, cobrancas, creditos, limiteCredito, novoSaldo;

    while( numeroConta > 0)
    {
        printf("Digite o numero da conta: ");
        scanf("%d", &numeroConta);

        if (numeroConta == 0) {
            break;
        }

        printf("Digite o saldo devedor no inicio do mes: ");
        scanf("%f", &saldoDevedor);

        printf("Digite o total de itens cobrados ao cliente no mes: ");
        scanf("%f", &cobrancas);

        printf("Digite o total de creditos aplicados a conta do cliente no mes: ");
        scanf("%f", &creditos);

        printf("Digite o limite de credito permitido: ");
        scanf("%f", &limiteCredito);

        // Calcular o novo saldo
        novoSaldo = saldoDevedor + cobrancas - creditos;

        // Verificar se o novo saldo excede o limite de crédito
        if (novoSaldo > limiteCredito) {
            printf("Numero da Conta: %d\n", numeroConta);
            printf("Limite de Credito: %.2f\n", limiteCredito);
            printf("Mensagem: Limite de Credito Excedido\n");
            printf("\n");
        } else {
            printf("Numero da Conta: %d\n", numeroConta);
            printf("Limite de Credito: %.2f\n");
            printf("Mensagem: Limite de Credito nao excedido\n");
            printf("\n");
        }
    }

    return 0;
}
