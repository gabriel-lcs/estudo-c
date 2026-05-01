#include <stdio.h>
#include <stdlib.h>

/*
    Aula 41 - Verdadeiro e falso na linguagem C
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