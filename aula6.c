#include <stdio.h>
#include <stdlib.h>

// Aula 6 - Lendo caracteres

int main() {
    char sexo = 'm';

    printf("Valor da variavel sexo: %c\n", sexo);

    printf("Digite o seu sexo (MmFf): ");
    scanf("%c", &sexo);

    printf("Valor da variavel sexo: %c\n", sexo);

    return 0; 
}