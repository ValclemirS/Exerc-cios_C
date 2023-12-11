/* Escreva um programa que leia um número positivo inteiro e apresente o quadrado 
e a raiz quadrada deste número. */
#include <math.h>
#include <stdio.h>
int main(){
    double a,b,c;
    printf("digite um numero: ");
    scanf("%lf",&a);
    b=pow(a,2);
    c=sqrt(a);
    printf("quadrado:%.1lf  raiz:%.1lf",b,c);
    return 0;
}
