/*
 Com o surgimento dos smartphones, a funcionalidade de agenda eletrônica 
passou a fazer parte do cotidiano das pessoas, de modo geral. Pensando em 
um protótipo de agenda, faça um programa para efetuar o cadastro de 30 
contatos. O cadastro deve conter as seguintes informações: nome, telefone e 
e-mail. Apresente todos os cadastros.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2
struct cadastroContato
{
    char nome[70];
    int telefone;
    char email[50];
};

int main(){
    struct cadastroContato ficha[TAM];
    int i,opt;
    for(i=0;i<TAM;i++){
        printf("Digite seu nome: ");
        gets(ficha[i].nome);
        fflush(stdin);
        printf("Digite seu telefone:");
        printf("(somente numeros)\n");
        scanf("%d",&ficha[i].telefone);
        while(getchar()!='\n');
        printf("Digite seu email: ");
        gets(ficha[i].email);
        fflush(stdin);
    }
    printf("como que fazer a busca?");
    printf("Por nome e email---1");
    printf("Por nome e telefone---2");
    printf("Por nome,telefone e email---3");
    scanf("%d",&opt);

    for(i=0;i<TAM;i++){
        printf("%s\n%d\n%s\n",ficha[i].nome,ficha[i].telefone,ficha[i].email);
      }
}

