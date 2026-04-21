#include <stdio.h>
#include <stdlib.h>

// Aula 14 - Outra forma de ler dois caracteres, dessa vez lendo em entradas diferentes

int main()
{
    char letra1, letra2;
    // leitura do primeiro caracter
    printf("Digite um caracter: ");
    scanf("%c", &letra1);

    // lendo um caracter sem salvar
    getchar();

    printf("Digite outro caracter: ");
    scanf(" %c", &letra2);

    printf("Primeiro cacatere: %c\nSegundo caractere: %c\n", letra1, letra2);

    return 0;
}