#include <stdio.h>
#include <stdlib.h>

// Aula 5 - Lendo números reais

int main() {
    float numero = 3.14159;

    printf("Valor da mina variável: %.4f\n", numero);

    printf("Digite um número real: ");
    scanf("%f", &numero);

    printf("Valor digitado pelo usuário: %f\n", numero);

    return 0; 
}
