#include <stdio.h>
#include <stdlib.h>

/*
    Aula 36 - Exercício 6

    6) Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em Dólares.
*/  

int main()
{   
    float reais, dolar;

    scanf("%f", &reais);

    dolar = reais / 5.30;

    printf("%.2f\n", dolar);

    return 0;
}