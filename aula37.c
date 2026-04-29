#include <stdio.h>
#include <stdlib.h>

/*
    Aula 37 - Exercício 7

    7) Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a 
    conversão para horas, minutos e segundos.
    Exemplo:
    Entrada: 3672
    Saída: 1:1:12
*/  

int main()
{   
    int segundos, minutos, horas, resto; 

    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;

    minutos = resto / 60;
    
    segundos = resto % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}