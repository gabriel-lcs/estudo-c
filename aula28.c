#include <stdio.h>
#include <stdlib.h>

/*
    Aula 28 - Operador de decremento --
*/  

int main()
{   
    int resultado, contador = 10;

    //Remove 1 na variável
    /*
    contador __; 
    contador -= 1;
    contador = contador - 1;
    */
    
    resultado = --contador;

    printf("Valor: %d\n", resultado);

    return 0;
}