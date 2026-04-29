#include <stdio.h>
#include <stdlib.h>

/*
    Aula 35 - Exercício 5

    5) Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo que são descontados 8% para imposto de renda.
*/  

int main()
{   
    float  liquido;
    int dias; 

    scanf("%d", &dias);

    liquido = (45 * dias) * 0.92;

    printf("%.2f\n", liquido);

    return 0;
}