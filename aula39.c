#include <stdio.h>
#include <stdlib.h>

/*
    Aula 39 - Decisão simples (IF)
*/  

int main()
{   
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0){
        printf("Valor Negativo\n");
    }

    printf("Continuação do programa\n");

    return 0;
}