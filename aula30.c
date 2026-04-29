#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Aula 30 - Tabela ASCII

    1 byte (8 bits) -> -128 até 127
    unsigned 1 byte -> 0 até 255

    setlocale(LC_ALL, NULL); // Padrão da linguagem C
    setlocale(LC_ALL, ""); // Padrão do sistema operacional
    setlocale(LC_ALL, "Portuguese"); // Padrão português brasileiro
*/  

int main()
{   
    setlocale(LC_ALL, "Portuguese");

    char letra = 'f';
    printf("%d\n", letra);

    return 0;
}