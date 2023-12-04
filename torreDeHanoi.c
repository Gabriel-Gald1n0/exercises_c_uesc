#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int hanoi(int n, char origem, char destino, char auxiliar){
    if(n==1)
    {
        printf("Mova o disco 1 da base %c para base %c\n", origem, destino);
    }else
    {
        hanoi(n-1,origem,auxiliar,destino);
        printf("Mova o disco %d da base %c para base %c\n",n, origem, destino);
        hanoi(n-1,auxiliar,destino,origem);
    }

    return 0;
}

int main(){

    int n = 0;

    printf("Digite o numero de discos: ");
    scanf("%d", &n);

    printf("Para resolver a torre de Hanois faça :\n\n");
    hanoi(n,'A','B','C');

    int movimento = pow(2,n);
    movimento -=1;
    printf("Total de movimentos realizados(move): %d", movimento);
    printf("\n");

 return 0;

}
