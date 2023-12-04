#include <stdio.h>

int main(void) {
    float qkm, qL = 1, R, Rt = 0;
    float i = 0;

    while (qL > 0) {
        printf("Informe a quantidade de gasolina (ou digite -1 para sair): ");
        scanf("%f", &qL);

        if (qL <= 0){
            break;
        }

        printf("Informe a kilometragem: ");
        scanf("%f", &qkm);

        R = qkm / qL;
        i++;
        Rt = Rt + R;

        printf("Consumo atual: %.2f km/l\n", R);
    }

    if (i > 0) {
        float Rt_total = Rt / i;
        printf("Taxa total de consumo: %.2f km/L\n", Rt);
    } else {
        printf("Nenhuma entrada valida fornecida.\n");
    }

    return 0;
}
