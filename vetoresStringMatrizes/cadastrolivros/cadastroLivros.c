/*
 É possível criar sistemas para organização e controle de estoque nas mais 
diversas áreas. Assim sendo, elabore um programa para efetuar o cadastro de 
20 livros e imprimi-los. O cadastro deve conter as seguintes informações: título, 
autor, editora, edição e ano.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 2
struct cadastroLivros
{
    char titulo[50];
    char  autor[50];
    char editora[50];
    char edicao[10];
    int anoPublicacao;
};

int main(){
    struct cadastroLivros ficha[TAM];
    int i;
   for(i=0;i<TAM;i++){
     printf("Digite o titulo do livro: ");
     gets(ficha[i].titulo);
     fflush(stdin);
     printf("Digite o autor do livro: ");
     gets(&ficha[i].autor);
     fflush(stdin);
     printf("Digite a editora  do livro: ");
     gets(&ficha[i].editora);
     fflush(stdin);
     printf("Digite a ediçao do livro: ");
     gets(&ficha[i].edicao);
     fflush(stdin);
     printf("Digite o ano do livro: ");
     scanf("%d",&ficha[i].anoPublicacao);
     while (getchar()!='\n');
     
   }
    for(i=0;i<TAM;i++){
        printf("livro=======================================\n");
        printf("%s\n%s\n%s\n%s\n%d\n",ficha[i].titulo,ficha[i].autor,ficha[i].edicao,ficha[i].editora,ficha[i].anoPublicacao);
        printf("livro=======================================");
    }
}
