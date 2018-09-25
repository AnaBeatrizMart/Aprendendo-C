#include <stdio.h>
#include <stdlib.h>

void main () {

    // Definindo variaveis
    int a = 1;
    char b = 'c';

    switch(a) {
        case 1:
            printf("\nOpcao escolhida: 1");
            break;
        case 2:
            printf("\nOpcao escolhida: 2");
            break;
        case 3:
            printf("\nOpcao escolhida: 3");
            break;
        default:
            printf("\nOpcao invalida");
            break;
    }

    switch(b) {
        case 'c':
            printf("\n A letra eh c");
            break;
        default:
            printf("\n Opção invalida");
        break;
               }

    // Pausando o sistema
    system ("pause");

              }
