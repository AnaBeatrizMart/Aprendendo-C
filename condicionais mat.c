#include <stdio.h>
#include <stdlib.h>

void main(){

// Definindo variaveis
int a = 4, b = 20, c = 34;
char d = 'x';

// Maior
if (a > 2) {
    printf("\n %d eh maior que 2", a);
}

// Maior ou igual
if (c>= b) {
    printf ("\n A %d eh maior ou igual a %d", c, b);
}

// Menor

if (a < 10) {
    printf("\n %d eh menor que 10", a);
}

// Menor ou igual
if (c <= b) {
    printf ("\n A %d eh menor ou igual a %d", c, b);
}

// Diferente
if (c!=10) {
    printf("\n C eh diferente de 10");
}

// Usando char
if (d != 'a') {
    printf("\n O %c nao eh a", d);
}

system ("pause");
}
