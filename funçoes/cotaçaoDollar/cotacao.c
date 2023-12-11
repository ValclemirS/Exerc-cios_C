/*
 O mundo das finanças é fascinante. Dentro deste contexto, existem diversas casas 
de câmbio que realizam compra e venda de moedas estrangeiras. Desse modo, 
elabore um programa que receba o valor da cotação do dólar e o valor em reais e 
que apresente o valor em dólares. */
#include <stdio.h>
#include <stdlib.h>

float conveterDollar(float f)
{
    int m, conveter;
    m = 5.00;
    conveter = m * f;
    return conveter;
}
float conveterReal(float f)
{
    int m, conveter;
    m = 5.00;
    conveter = f / m;
    return conveter;
}
int main()
{
    float moeda, conversao;
    int opt, menu;
    printf("Deseja realizar uma conversao\n");
    printf("1-SIM\n2-NAO\n");
    scanf("%d", &menu);
    system("cls");
    while (menu != 2)
    {
        printf("digite o valor que deseja converter: ");
        scanf("%f", &moeda);
        printf("Converte para dollar ou real\n");
        printf("1-DOLLAR\n2-REAL\n");
        scanf("%d", &opt);
        system("cls");
        switch (opt)
        {
        case 1:
            conversao = conveterDollar(moeda);
            printf("o cambio da moeda e:%.2f\n", conversao);
            break;
        case 2:
            conversao = conveterReal(moeda);
            printf("o cambio da moeda e:%.2f\n", conversao);
            break;
        default:
            printf("Digite um numero valido\n");
            break;
        }
        printf("Deseja realizar outra conversao\n");
        printf("1-SIM\n2-NAO\n");
        scanf("%d", &menu);
        system("cls");
    }
}