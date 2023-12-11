/*
. Imagine que você esteja ensinando a tabuada para uma criança e precisa mostrar 
a ela todas as possíveis multiplicações entre os números que vão de um até dez. 
Assim, elabore um programa que imprima a tabuada do um ao dez.*/
#include <stdio.h>

int main()
{
    int i, numero, mult;
    printf("Digite um numero");
    scanf("%d", &numero);
    printf("tabuada do %d\n ", numero);
    for (i = 0; i <= 10; i++)
    {
        mult = i * numero;
        printf(" %d x %d =%d\n", numero, i, mult);
    }

    return 0;
}