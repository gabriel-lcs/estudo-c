#include <stdio.h>
#include <stdlib.h>

// Aula 22 - long para o tipo double double -> %lf long double -> %Lf 

int main()
{   
    double y = 3.141592653897932384626433832795028841971;
    // 8 * 8 = 64 bits

    long double x = 3.141592653897932384626433832795028841971;
    // 16 * 8 = 128 bits

    printf("Um double em bytes: %d\n", sizeof y);
    printf("Valor de y: %.10lf\n", y);

    printf("Um long double em bytes: %d\n", sizeof x);
    printf("Valor de x: %Lf\n", x);
    printf("Valor de x: %.20Lf\n", x);
    return 0;
}