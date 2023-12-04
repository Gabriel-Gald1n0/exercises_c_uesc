#include <stdio.h>
#include <math.h>

int main() {
    float n1,n2,n3,n4,n5,nf, media, prova_final;

    printf("Digite as notas do aluno: ");
    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    media = (n1 + n2 + n3 + n4 + n5)/5;
    printf("Media do semestre: %2.f\n",media);

    if (media < 7.0)
    {
        printf("O aluno esta na prova final\n");
        printf("Digite as notas do aluno: ");
        scanf("%f", &nf);

       prova_final = (media + nf)/2;
       printf("Nota final: %2.f",prova_final);

    }else{
        printf("aluno aprovado!\n");
        printf("Nota final: %2.f",media);
    }

    return 0;
}

