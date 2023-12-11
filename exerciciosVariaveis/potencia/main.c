/*Problema 4
Escreva um programa que receba dois números, calcule e apresente o resultado 
do primeiro número elevado ao segundo. */
#include <stdio.h>
int main() {
    float a, b,c;
    printf("Digite um numero: ");
    scanf("%f", &a);
    printf("Digite o expoente desse numero: ");
    scanf("%f", &b);
    c=pow(a,b);
    printf("O numero %.1f elevado a  %.1f e igual: %.1f \n",a,b,c);
    return 0;
}
