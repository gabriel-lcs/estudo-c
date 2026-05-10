#include <stdio.h>
#include <stdlib.h>

/*
    Aula 44 - Decisão Aninhadas
*/  

int main()
{   
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0)
        printf("Valor negativo\n");
    else{
        if(a > 0)
            printf("Valor positivo\n");
        else
            printf("Valor igual a zero\n");
    }
    
    printf("Continuação do programa\n");

    return 0;
}