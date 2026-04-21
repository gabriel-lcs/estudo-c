#include <stdio.h>
#include <stdlib.h>

// Aula 16 - Operador sizeof -> sizeof / sizeof(int)

int main()
{
    float x = 1.3;

    printf("Tamanho em memória de um float: %d bytes\n", sizeof x);
    printf("Tamanho em memória de um int: %d bytes\n", sizeof(int));

    // 4 * 8 = 32 bits - 1 inteiro ocupa 32 bits

    return 0;
}