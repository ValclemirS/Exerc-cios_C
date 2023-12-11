/*4. Escreva um programa que receba quatro números inteiros, calcule e apresente a média aritmética entre eles. Observação: não esqueça de formatar o valor da média no 
momento de apresentá-lo, para que sejam impressas apenas duas casas decimais*/
#include <stdio.h>
int main() {
    float a,b,c,d,media;
    printf("digite 4 numeros e veja a media deles:\n");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    media=(a+b+c+d)/4;
    printf("A media e:%.2lf",media);
    return 0;
}
