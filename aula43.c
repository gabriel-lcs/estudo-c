#include <stdio.h>
#include <stdlib.h>

/*
    Aula 43 - Operador terminário em C
    condição ? verdadeiro : falso
*/  

int main()
{   
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    a < 0 ? printf("Valor Negativo\n") : printf("Valor Positivo\n");
    
    printf("Continuação do programa\n");

    return 0;
}