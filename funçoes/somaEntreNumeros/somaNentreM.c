/*
 Provavelmente, você já deve ter se deparado com uma situação na qual é preciso 
calcular o somatório de valores compreendidos dentro de um intervalo determinado. 
Por isso, elabore uma função que receba dois números positivos por parâmetro e 
retorne a soma dos N números inteiros existentes entre eles. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somarNumeros(int n, int m)
{
    int i, soma;
    soma = 0;
    if (n >= m)
    {
        for (i = m; i <= n; i++)
        {
            soma += i;
        }
    }
    else
    {
        for (i = n; i <= m; i++)
        {
            soma += i;
        }
    }
    return soma; 
}

int main(){
    int num,num2,resposta;
    printf("digite dois numeros: ");
    scanf("%d %d",&num,&num2);
    resposta=somarNumeros(num,num2);
    printf("A soma entre os numeros e: %d",resposta);
}