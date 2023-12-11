/*
. É muito comum que programas tenham de implementar funcionalidades para identificar características 
específicas e realizar operações sobre um conjunto de dados. 
Dessa forma, faça um programa que apresenta a soma de todos os números inteiros 
ímpares entre 200 e 500.*/
#include <stdio.h>

int main()
{
    int i, impar, n, N;
    impar = 0;
    printf("vamos verificar a quantidade  de numeros impares entre dois numeros\n");
    printf("Digite o priemiro numero da sequencia\n");
    scanf("%d", &n);
    printf("Digite o segundo numero da sequencia\n");
    scanf("%d", &N);

    for (i = n; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            impar++;
        }
    }
    printf("O numero de impares entre 200 e 500 e: %d\n", impar);
    return 0;
}