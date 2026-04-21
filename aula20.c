#include <stdio.h>
#include <stdlib.h>

// Aula 20 - Tamanho de um float na memoria %f

int main()
{   
    float x = 3.1415;

    printf("Um float em bytes: %d\n", sizeof x);
    printf("Valor de x: %f\n", x);

    return 0;
}