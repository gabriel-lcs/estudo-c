#include <stdio.h>
#include <stdlib.h>

/*
    Aula 34 - Exercício 4

    4) Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em 
    porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar. 
    Assuma que a conta será dividida igualmente
*/  

int main()
{   
    float despesa, conta, gorgeta;
    int pessoas; 

    scanf("%f", &despesa);
    scanf("%f", &gorgeta);
    scanf("%d", &pessoas);

    conta = (despesa + (despesa * (gorgeta / 100))) / pessoas;

    printf("%.2f\n", conta);

    return 0;
}