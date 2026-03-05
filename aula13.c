#include <stdio.h>
#include <stdlib.h>

// Aula 13 - Ler dois caracteres

int main() {
    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b); // espaço entre os %c ele desconsidera o ENTER, o TAB e o SPACE

    printf("Primeiro cacatere: %c\nSegundo caractere: %c\n", a, b);
    
    return 0;
}