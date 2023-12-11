/*Faça um programa que leia números inteiros até que seja informado o valor 0. 
Apresente a média dos valores, o maior e o menor valor e a quantidade de números 
pares e ímpares.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n, nMaior, nMenor;
    int quantn, par, impars;
    float media,soma;

    nMaior = 0;
    nMenor = INFINITY;
    quantn = 0;
    soma = 0;
    par = 0;
    impars = 0;

    do
    {
        printf("Informe um numero (ou 0 para encerrar): ");
        scanf("%d", &n);

        if (n != 0)
        {
            quantn++;
            soma += n;

            if (n > nMaior)
            {
                nMaior = n;
            }

            if (n < nMenor)
            {
                nMenor = n;
            }
            if (n % 2 == 0) {
    par++;
} else {
    impars++;
}
     
        }
             
    } while (n != 0);
    media=soma / quantn;
    printf("A quantidade de numeros informados pelo usuario: %d\n", quantn);
    printf("A soma dos numeros informados e %d\n", soma);
    printf("A media dos numeros informados e %.2f\n", media);
    printf("O maior numero informado %d\n", nMaior);
    printf("O menor numero informado %d\n", nMenor);
    printf("A quantidade de numeros impares informados pelo usuario: %d\n", impars);
    printf("A quantidade de numeros  pares informados pelo usuario: %d\n", par);
    return 0;
}
