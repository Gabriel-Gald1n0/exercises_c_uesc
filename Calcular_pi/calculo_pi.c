#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
/*sortear x y calcular area do circulo e dizer se um ponto está dentro dele ou não dividir qntd de drntro pela qntd de fora*/

void calcularPi() {
        FILE *dataFile = fopen("dados.txt", "w");
        if (dataFile == NULL) {
            printf("Erro ao abrir o arquivo de dados.\n");
            exit(1);
    }

     int i = 0, n=1000000;
    int acertos = 0, erros = 0;

    srand(time(NULL));

    for(i = 0; i < n; i++)
    {
        float x = (float)rand()/RAND_MAX;
        float y = (float)rand()/RAND_MAX;

        double z = x*x + y*y;

        if( z < 1.0){
            acertos++;
        } else{
            erros++;
        }

        // Salvar os resultados no arquivo de dados
        fprintf(dataFile, "%f %f\n", x, y);
    }

    float pi = (float)(4.0* acertos/n);
    printf("pi = %f", pi);
    printf("\nPontos dentro = %i", acertos);
    printf("\nPontos fora = %i", erros);
    fclose(dataFile);
}


int main(){
    // Chamar a função para gerar dados e calcular π
    calcularPi();

    // Chamar o script Gnuplot
    system("gnuplot script.gp");
    system("gnuplot script2.gp");

    // Abrir a imagem gerada com o visualizador de imagem padrão
    system("start monte_carlo_plot.png");
    system("start monte_carlo_quarter_circle.png");
 return 0;
}

