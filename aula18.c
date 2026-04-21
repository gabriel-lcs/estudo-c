#include <stdio.h>
#include <stdlib.h>

// Aula 18 - Tamanho de um int na memória. Intervalo: -2.147.483.648 até 2.147.483.647 %hi / %d

int main()
{   
    int x = 2147483647;

    printf("Valor de X: %d\n", x);
    x ++;
    // Estoura o limite
    printf("Valor de X: %d\n", x);

    return 0;
}