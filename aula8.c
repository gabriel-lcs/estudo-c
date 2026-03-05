#include <stdio.h>
#include <stdlib.h>

// Aula 8 - Lendo caracteres com getc()

int main() {
    char letra;

    printf("Digite uma letra: ");
    letra = getc(stdin);

    printf("Caracter lido: %c\n", letra);
    
    return 0; 
}