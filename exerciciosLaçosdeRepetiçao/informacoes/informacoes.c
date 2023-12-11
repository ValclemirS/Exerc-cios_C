/*
 Elabore um programa que receba a idade, o peso, o sexo e o estado civil de várias 
pessoas e imprima a quantidade daquelas que são casadas, solteiras, separadas 
e viúvas. Apresente a média de idade e de peso. O algoritmo finaliza quando for 
informado o valor zero para idade.*/
#include <stdio.h>

int main()
{
    int idade, quantC, quantSol, quantSep, quantV, media, opt, quantP;
    float peso, somaI, somaP;
    char sexo[5];
    quantSol = 0;
    quantSep = 0;
    quantV = 0;
    quantC = 0;
    somaI = 0;
    quantP = 0;
    somaP = 0;

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    while (idade != 0)
    {
        quantP++;
        somaI = somaI + idade;
        printf("Informe seu peso: ");
        scanf("%f", &peso);
        printf("Informe seu sexo: M ou f ou NB(nao binaria)");
        scanf("%s", sexo);
        printf("Informe seu estado civil 1-solteiro\n2-casada\n3-divorciadas\n4-viuva");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            quantSol++;
            break;
        case 2:
            quantC++;
            break;
        case 3:
            quantSep++;
            break;
        case 4:
            quantV++;
            break;
        }
        somaP = somaP + peso;
        printf("Informe sua idade: ");
        scanf("%d", &idade);
    }
    printf("A media de idade dos entrevistados e:%.2f\n", somaI / quantP);
    printf("A media de peso dos entrevistados e:%.2f\n", somaP/quantP);
    printf("estado civil do entrevistados:");
    printf("Solteriras:%d\n", quantSol);
    printf("casadas:%d\n", quantC);
    printf("viuvas:%d\n", quantV);
    printf("Divorciadas:%d\n", quantSep);

    return 0;
}