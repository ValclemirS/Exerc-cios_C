/*
. A computação, frequentemente, é utilizada para servir de ferramenta na identificação de 
diferenças ou semelhanças entre objetos.
Dessa forma, faça um programa 
que leia dois vetores A e B e apresente a quantidade de posições que possuem 
elementos diferentes entre um vetor e outro. */
#include <stdio.h>
#define TAM 3

int main()
{
    int i, vA[TAM], vB[TAM], c, vC[TAM];
    c = 0;
    for (i = 0; i < TAM; i++)
    {
        printf("digite um numero");
        scanf("%d", &vA[i]);
        printf("digite um numero");
        scanf("%d", &vB[i]);
    }
    for (i = 0; i < TAM; i++)
    {
        if (vA[i] != vB[i])
        {
            vC[c] = i;
            c++;
        }
    }
    printf("Foi encontrado  um total de: %d elemento(s)\n nas posicoes: ", c);
    for (i = 0; i < c; i++)
    {
        printf("%d", vC[i]);
    }
}