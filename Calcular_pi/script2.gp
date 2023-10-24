set terminal pngcairo size 800,800
set output 'monte_carlo_quarter_circle.png'

set size ratio -1  # Mantém a proporção para uma representação de círculo

# Configura a faixa de plotagem para 1/4 da circunferência
set xrange [0:1]
set yrange [0:1]

# Configuração da circunferência
set object 1 circle at 0,0 size 1 arc [0:90] fs solid 0.0 border -1 lw 1 # lw = largura
set style fill transparent solid 0.4 border

# Pontos dentro do 1/4 da circunferência
plot "dados.txt" using 1:2:(($1**2 + $2**2 < 1) && ($1 >= 0) && ($2 >= 0) ? 1 : 2) with points lc variable title "Pontos"

unset object 1
set output
