/*1. É comum, em uma aplicação, ter de determinar quais números são o maior ou o 
menor, dentre todos os valores de um conjunto de dados. Assim sendo, escreva 
um programa que receba cinco números inteiros e apresente o maior e o menor. 
*/

#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("digite 5 numeros:");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    if (a > b && a > c && a > d && a > e)
    {
        printf("o maior %d", a);
    }
    else
    {
        if (b > c && b > d && b > e)
        {
            printf("o maior %d", b);
        }
        else
        {
            if (c > d && c > e)
            {
                printf("o maior %d", c);
            }
            else
            {
                if (d > e)
                {
                    printf("o maior %d", d);
                }
                else
                {
                    printf("o maior %d", e);
                }
            }
        }
    }
    return 0;
}
