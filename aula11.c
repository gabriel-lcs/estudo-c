#include <stdio.h>
#include <stdlib.h>

// Aula 11 - Ler sexo, idade, peso e altura.

int main() {
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite seu sexo (FfMm): ");
    scanf("%c", &sexo);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Sexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);
    
    return 0;
}