/*
 muito comum que programas tenham de implementar funcionalidades para identificar características específicas e, assim, realizar operações sobre um conjunto de 
dados. Dessa forma, faça um programa com uma função que apresente o somatório dos N primeiros números pares, definidos por um operador. O valor de N será 
informado pelo usuário.*/
#include <stdio.h>
#include <stdlib.h>

int somarNpares(int n){
    int i,soma;
    soma=0;
    for(i=0;i<=n;i+=2){
        soma+=i;
    }
    return soma;
}
int main(){
    int num,somatorio;
    printf("digite um numero n: ");
    scanf("%d",&num);
    somatorio=somarNpares(num);
    printf("Somatorio de n primeiros pares:%d",somatorio);
}