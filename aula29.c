#include <stdio.h>
#include <stdlib.h>

/*
    Aula 29 

    Operador unsigned
    Trocar o %d por %u
    Limite para o tipo int: 2.147.438.647
    short int -> %d / %hi
    unsigned short int -> %hu / %d
    unsigned long int -> %lu
*/  

int main()
{   
    int x = 2147483647; 
    // O unsigned tira o valor negativo dos operadores, então no caso de int o limite positivo deixa de ser 2.147.483.647 e vai para 4.294.967.295
    unsigned int y = 2147483647;

    unsigned short int z = 55000;

    printf("%d\n", x);
    x++;
    printf("%d\n", x);

    printf("\n");

    printf("%u\n", y);
    y++;
    printf("%u\n", y);

    printf("\n");
    
    printf("%hu\n", z);

    return 0;
}