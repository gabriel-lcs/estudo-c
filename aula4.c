#include <stdio.h>
#include <stdlib.h>

// Aula 4 - Lendo número inteiros

int main() {
    int valor, valor2; // cria uma variável do tipo inteiro
    
    // atribuição -> atribuir um valor a variável valor
    valor = 50;

    printf("Digite um valor inteiro: ");
    // leitura de um valor pelo usuário
    scanf("%d", &valor);

    printf("Digite um segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("Primeiro valor: %d\nSegundo valor: %d\n", valor, valor2);

    return 0; 
}
