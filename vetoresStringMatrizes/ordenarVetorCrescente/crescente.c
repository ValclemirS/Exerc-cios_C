/*
 É comum que um programa seja capaz de realizar a ordenação de elementos ou
dados de forma a facilitar as operações futuras e a apresentação deste conjunto de
dados. Assim sendo, escreva um programa que leia um vetor A e o apresente em
ordem decrescente
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 5

int main()
{
    int i, j, troca, vA[TAM], numeroAleatorio;
    srand(time(NULL));

    for (i = 0; i < TAM; i++)
    {
        numeroAleatorio = rand() % 100;
        vA[i] = numeroAleatorio;
    }
    for (i = 0; i < TAM - 1; i++)
    {
        for (j =1+i; j < TAM; j++)
        {
            if (vA[i] > vA[j])
            {
                troca = vA[i];
                vA[i] = vA[j];
                vA[j] = troca;
            }
        }
    }
    for (i = 0; i < TAM; i++)
    {
        printf("%d ", vA[i]);
    }
}
