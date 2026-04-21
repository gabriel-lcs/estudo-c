#include <stdio.h>
#include <stdlib.h>

// Aula 21 - Tipo double %lf

int main()
{   
    float x = 3.1415;

    double y = 3.141592653897932384626433832795028841971;

    printf("Um float em bytes: %d\n", sizeof x);
    printf("Um double em bytes: %d\n", sizeof y);
    printf("Valor de x: %f\n", x);
    printf("Valor de y: %lf\n", y);
    return 0;
}