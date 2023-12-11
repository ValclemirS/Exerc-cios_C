/*
Faça um programa que leia um conjunto de pedidos e calcule o total da compra. O 
pedido possui os seguintes campos: número, data (dia, mês e ano), preço unitário 
e quantidade. A entrada de pedidos é encerrada quando o usuário informa zero 
como número do pedido*/
#include <stdio.h>

int main()
{
    int n, dia, mes, ano, quantidade;
    float price;
    printf("digite o numero/codigo do pedido: ");
    scanf("%d", &n);
    while (n != 0)
    {
        printf("digite o dia do pedido: ");
        scanf("%d", &dia);
        printf("digite o mes do pedido: ");
        scanf("%d", &mes);
        printf("digite o anodo pedido: ");
        scanf("%d", &ano);
        printf("digite o preco unitario: ");
        scanf("%f", &price);
        printf("digite a quantidade: ");
        scanf("%d", &quantidade);
        printf("pedido registrado.\n");
        printf("seu pedido:%d\nregistrado na data %d/%d/%d.\nquantidade: %d.\npreco unitario:%.2f\nvalor total:%.2f\n"
        , n, dia, mes, ano, quantidade, price, price * quantidade);
        printf("digite o numero/codigo do pedido:\n ");
        scanf("%d", &n);
    }
    printf("programa encerrado com sucesso");

    return 0;
}