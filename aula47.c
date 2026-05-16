#include <stdio.h>
#include <stdlib.h>

/*
    Aula 47 - Operador lógico "e" (&&)
    tabela verdade  a   b   a && b
                    V   V     V
                    V   F     F
                    F   V     F
                    F   F     F                    
*/  

int main()
{   
    int idade;
    char sexo;

    printf("Digite seu sexo F ou M: ");
    scanf("%c", &sexo);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(sexo == 'm' && idade == 18)
        printf("Alistamento obrigatório\n");
    else
        printf("Dispensado\n");

    return 0;
}