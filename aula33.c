#include <stdio.h>
#include <stdlib.h>

/*
    Aula 33 - Exercício 3

    3) Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma variável auxiliar.
*/  

int main()
{   
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    a += b;
    b = a - b;
    a -= b;

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}