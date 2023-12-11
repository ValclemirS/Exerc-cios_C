/*
Nada melhor do que uma máquina para realizar tarefas repetitivas, evitando esforço 
humano desnecessário. Assim sendo, elabore um programa que leia uma frase e o 
número de vezes que deseja imprimi-la*/
#include <stdio.h>

int main() {
    int i,numero;
    char frase[300];
    printf("Digite sua frase (no maximo 300 caracteres)");
    fgets(frase,sizeof(frase),stdin);
    printf("digite o numero que frase vai ser repetida no terminal");
    scanf("%d",&numero);
    for(i=0;i<=numero;i++){
        printf("%s",frase);
    }
    return 0;
}