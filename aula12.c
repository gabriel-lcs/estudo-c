#include <stdio.h>
#include <stdlib.h>

// Aula 12 - Ler idade, peso, altura e sexo. Problema de buffer do teclado

int main() {
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    // buffer do teclado - quando digito "enter", ele interpreta um \n

    printf("Digite seu sexo (FfMm): ");
    scanf(" %c", &sexo); // " %c" esse espaço resolve o problema do enter na leitura do caractere

    printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);
    
    return 0;
}