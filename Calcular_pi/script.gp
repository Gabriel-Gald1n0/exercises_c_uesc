set terminal pngcairo size 800,800 # Define o formato da imagem
set output 'monte_carlo_plot.png' #Define o nome de saida da img

set size square #Define propor��o da  tela como quadrada e x e y mantem uma aparencias circular
set xrange [-1:1] #Correspondem a area da circunferencia de -1 a 1
set yrange [-1:1]

# Configura��es da circunfer�ncia
set object 1 circle at 0,0 size 1 fs solid 0.0 border -1 lw 1
set style fill transparent solid 0.4 border #define estilo dos pontos

# Pontos dentro da circunfer�ncia
plot "dados.txt" using 1:2:(sqrt($1**2 + $2**2) < 1 ? 1 : 2) with points lc variable title "Pontos"

unset object 1 #Remove o objeto da circunfer�ncia para que ele n�o apare�a na imagem final
set output #Encerra a sa�da para o arquivo PNG
