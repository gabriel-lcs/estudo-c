#include <stdio.h>
#include <stdlib.h>

/*
    Aula 25 - Conversão de tipos
*/  

int main()
{   
    int x = 10, y = 20;
    float pi = 3.1415;

    int a = (int)pi;

    printf("Valor de A: %d\n", a);
    printf("Soma: %d\n", x + y);
    printf("Subtração: %d\n", x - y);
    printf("Multiplicação: %d\n", x * y);
    printf("Divisão: %f\n", (float)x / y);

    return 0;
}