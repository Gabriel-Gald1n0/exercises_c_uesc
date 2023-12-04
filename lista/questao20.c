#include <stdio.h>

int main() {
    int numEmpregados;

    printf("Digite o numero de empregados: ");
    scanf("%d", &numEmpregados);

    for (int i = 0; i < numEmpregados; i++) {
        int horasTrabalhadas;
        float valorHoraNormal, pagamentoBruto;

        printf("Digite o numero de horas trabalhadas para o empregado %d: ", i + 1);
        scanf("%d", &horasTrabalhadas);

        printf("Digite o valor da hora normal para o empregado %d: ", i + 1);
        scanf("%f", &valorHoraNormal);

        if (horasTrabalhadas <= 40) {
            // Sem horas extras
            pagamentoBruto = horasTrabalhadas * valorHoraNormal;
        } else {
            // Com horas extras
            int horasNormais = 40;
            int horasExtras = horasTrabalhadas - 40;
            pagamentoBruto = (horasNormais * valorHoraNormal) + (horasExtras * 1.5 * valorHoraNormal);
        }

        printf("O pagamento bruto para o empregado %d: %.2f\n\n", i + 1, pagamentoBruto);
    }

    return 0;
}
