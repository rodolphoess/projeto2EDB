# Inicializacao
clear
reset
set key on

# Configuracoes de saida: inclui formato de exportacao, tamanho do grafico
# fontes utilizadas e nome do arquivo de saida

# Exportacao para o formato .png
set terminal png size 640, 480 enhanced font 'Helvetica, 12'
set output 'graphic/selection.png'

# Título do gráfico
set title 'Análise empírica do algoritmo Selection Sort, em relação base de busca e tempo'

# Configurações do eixo horizontal
set xrange[2:1024]                  # Faixa de valores
#set xtics 100                          # Salto entre valores
set logscale x 2
set xtic rotate by -45 scale 0      # Rotação dos rótulos
set xlabel "Base de busca"

# Configuração do eixo vertical
set yrange[0:2500]                  # Faixa de valores
#set ytics 250
set ylabel "Tempo (ms)"

# Plotagem do gráfico
# Os dados a serem plotados constam no arquivo selectionsort.dat
set grid
plot './data/estatistica/selectionsort.dat' u 1:2  w l lw 2 t 'Melhor', '' u 1:3 t 'Médio' w l lw 2, '' u 1:4 t 'Pior' w l lw 2