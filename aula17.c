#include <stdio.h>
#include <stdlib.h>

// Aula 17 - Operador short para o tipo int. Intervalo: -32.768 até 32.767 %hi / %d

int main()
{   
    int y = 0;
    short int x = 32767;

    printf("Tamanho em memória de um int: %d bytes\n", sizeof y);
    printf("Tamanho em memória de um short: %d bytes\n", sizeof x);

    // Para cada variável vai economizar 2 bytes ou 16 bits

    printf("Valor de X: %d\n", x);
    x ++;
    // Estoura o limite
    printf("Valor de X: %hi\n", x);

    return 0;
}