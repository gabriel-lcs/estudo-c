#include <stdio.h>
#include <stdlib.h>

/*
    Aula 42 - Endentação e uso das chaves
*/  

int main()
{   
    int a;

    printf("Digite um valor qualquer: ");
    scanf("%d", &a);

    //Se tiver apenas 1 linha apos if e else não precisa de chave, se tiver mais de 1, precisa.

    if(a < 0)
        printf("Valor Negativo\n");
    else{
        printf("Valor Positivo\n");
        printf("Valor Positivo 2\n");
    }

    printf("Continuação do programa\n");

    return 0;
}