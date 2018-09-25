#include <stdio.h>
#include <stdlib.h>

void main () {

    // Definindo variaveis
    int a = 1, b = 10;

    // Contando ate 10
    while (a <= 10) {

            // Imprimindo a na tela
        printf("\n%d", a);

        // Incremento
        a = a + 1; // a++
    }

    // Contagem regressiva
    while (b >=1) {
            printf("\n %d", b);
            b = b - 1; // b--

    }

    // Pausando o sistema
    system ("pause");

              }
