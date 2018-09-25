#include <stdio.h>
#include <stdlib.h>

// Funcao principal do programa

void main() {

// Definindo variaveis
int a = 26;
float b = 4.75;
char c = 'c';
int d = 4, opcao = 1;
// Condicional simples
if (a == 26)  {
    printf("A variavel a = 26\n");
           }

if (b == 4.75)  {
    printf("A variavel a = 4.75\n");
           }

if (c == 'c')  {
    printf("A variavel c = c\n");
           }

// Numero par ou impar
if (a % 2 == 1) {
        printf ("\n variavel a eh impar\n");
                }
else {
      printf("\nA variavel eh par\n");
     }

// Condicional composta
if (opcao==1) {
    printf("\n A opcao = 1");}
else if (opcao == 2) {
    printf("\n A opcao = 2");
                        }
else{
    printf ("\n A opcao nao eh igual a 1 e nem 2");
}

// Pausando o sistema
system ("pause");
}
