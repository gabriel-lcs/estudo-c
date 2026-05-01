#include <stdio.h>
#include <stdlib.h>

/*
    Aula 40 - Decisão completa (IF / ELSE)
*/  

int main()
{   
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0){
        printf("Valor Negativo\n");
    }
    else{
        printf("Valor Positivo\n");
    }

    printf("Continuação do programa\n");

    return 0;
}