#include <stdio.h>
#include <stdlib.h>

/*
    Aula 45 - Operador ternário aninhado
*/  

int main()
{   
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    a < 0 ? printf("Valor negativo\n") : a > 0 ? printf("Valor positivo\n") : printf("Valor igual a zero\n");
    
    printf("Continuação do programa\n");

    return 0;
}