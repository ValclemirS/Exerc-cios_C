/*Em algumas situações, em uma aplicação, é preciso determinar quais são os 
números múltiplos de um ou mais valores, dentre todos os valores de um conjunto de dados. Dessa forma, faça um programa que leia um número e informe 
se ele é divisível por três e por sete*/
#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um numero");
    scanf("% d", &numero);
    if (numero % 3 == 0 && numero)
    {
        printf("O Numero %d e multiplo de 3 e 7", numero);
    }
    else
    {
        if (numero % 3 == 0)
        {
            printf("O Numero %d e multiplo de 3 ", numero);
        }
        else
        {
            if (numero % 7 == 0)
            {
                printf("O Numero %d e multiplo de 7 ", numero);
            }
            else
            {
                printf("O Numero %d sem multiplos comun entre 3 e 7 ", numero);
            }
        }
    }
    return 0;
}
