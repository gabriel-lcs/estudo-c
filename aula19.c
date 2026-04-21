#include <stdio.h>
#include <stdlib.h>

// Aula 19 - Operador long para o tipo int %li / %ld

int main()
{   
    long int x = 2147483647;

    printf("Tamanho de X em bytes: %d\n", sizeof x);

    printf("Valor de X: %ld\n", x);
    x ++;
    printf("Valor de X: %ld\n", x);

    return 0;
}