#include <stdio.h>
#include <stdlib.h>

/*
    Aula 38 - Operadores relacionais

    Menor que - (a < b)
    Maior que - (a > b)
    Menor ou igual - (a <= b)
    Maior ou igual - (a >= b)
    Igual - (a == b)
    Diferente - (a != b)
*/  

int main()
{   
    int a = 10, b = 20;

    // 0 = Falso 1 = Verdadeiro
    
    printf("A > B = %d\n", a > b);
    printf("A < B = %d\n", a < b);
    printf("A >= B = %d\n", a >= b);
    printf("A <= B = %d\n", a <= b);
    printf("A != B = %d\n", a != b);
    printf("A == B = %d\n", a == b);

    return 0;
}