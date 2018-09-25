#include <stdio.h>
#include <stdlib.h>

void main () {

    // Defininindo variaveis
    int opcao;

    // Interface menu

    while (opcao < 1 || opcao > 3) {
        printf("Escolha uma opcao:");
    printf("\n1- Opcao 1");
    printf("\n2- Opcao 2");
    printf("\n3- Opcao 3\n\n");

    // Lendo a opcao
    scanf ("\n%d", &opcao);

    // Resultado de acordo com a opcao
    switch (opcao)
{
    case 1:
        printf("\n A opçao escolhida eh a 1");
        break;
    case 2:
        printf("\n A opcao escolhida eh a 2");
        break;
    case 3:
        printf("\n A opcao escolhida eh a 3");
        break;
    default:
        printf ("\n Nenhuma das alternativas");
        break;

    }

}

    // Pausando o sistema
    system ("pause");

              }
