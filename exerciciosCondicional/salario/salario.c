/* Elabore um programa que receba o salário de um funcionário e o código do 
cargo e apresente o cargo, o valor do aumento e o novo salário. A tabela a 
seguir apresenta os cargos. 
Código Cargo Percentual do aumento
1 Servente 40%
2 Pedreiro 35%
3 Mestre de obras 20%
4 Técnico de segurança 10%*/
#include <stdio.h>
int main()
{
    float salario, aumento;
    int opt;
    char nome[30];
    printf("Digite seu nome");
    scanf("%s", nome);
    printf("Digite seu salario base");
    scanf("%f", &salario);
    printf("digite seu cargo para receber o aumento inicial");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        aumento = (salario * 0.4) + salario;
        printf("Cargo e servente aumento de 40porcento  seu novo salario e; %f ", aumento);
        break;

    default:
        printf("opcao invalida");
        break;
    }
    getchar();
    return 0;
}
