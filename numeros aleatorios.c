#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main () {
    // Parte que eh responsavel para alimentar o rand de forma diferente

    srand((unsigned)time(NULL));

    // Variavel que recebe resto da divisao do
    // numero por 3 retorna 0 ou 2
    int aleatorio = rand() % 3;

    // Variavel que recebe o resto da divisao
    // do numero por 5 (de 0 a 4)
    int aleatorio2 = rand() % 5;

    // Imprime o valor
    printf("\n %d", aleatorio);
    printf("\n %d", aleatorio2);
    // Pausando o sistema
    system ("pause");

              }
