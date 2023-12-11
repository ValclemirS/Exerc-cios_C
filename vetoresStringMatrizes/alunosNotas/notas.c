/*
. Já pensou em facilitar a vida do seu professor, criando um programa que automatize 
os cálculos das notas de seus alunos? Sendo assim, faça um programa que efetue a 
leitura dos nomes de cinco alunos e, também, de suas quatro notas bimestrais. Calcule a 
média de cada aluno e apresente os nomes classificados em ordem crescente de média.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 2

struct alunos
{
    char nome[20];
    float nota[TAM][2];
    float media;
};

int main()
{
    struct alunos Mnotas[TAM];
    int i, j, k, troca;
    float soma, media[TAM];

    for (i = 0; i < TAM; i++)
    {
        soma = 0;
        printf("Digite o nome do aluno: ");
        scanf("%19s", Mnotas[i].nome);

        for (j = 0; j < 2; j++)
        {
            printf("Digite a nota %d do aluno %s: ", j + 1, Mnotas[i].nome);
            scanf("%f", &Mnotas[i].nota[i][j]);
            soma += Mnotas[i].nota[i][j];
        }

        Mnotas[i].media = soma / 2;
        media[i] = Mnotas[i].media;
    }

    for (i = 0; i < TAM - 1; i++)
    {
        for (j = i + 1; j < TAM; j++)
        {
            if (Mnotas[i].media > Mnotas[j].media)
            {
                troca = Mnotas[i].media;
                Mnotas[i].media = Mnotas[j].media;
                Mnotas[j].media = troca;
                for (k = 0; k < 2; k++)
                {
                    troca = Mnotas[i].nota[i][k];
                    Mnotas[i].nota[i][k] = Mnotas[j].nota[j][k];
                    Mnotas[j].nota[j][k] = troca;
                }
                char temp[20];
                strcpy(temp, Mnotas[i].nome);
                strcpy(Mnotas[i].nome, Mnotas[j].nome);
                strcpy(Mnotas[j].nome, temp);
            }
        }
    }
    for (i = 0; i < TAM; i++)
    {
        printf("%s ===== %.2f\n", Mnotas[i].nome, Mnotas[i].media);
    }

    return 0;
}

