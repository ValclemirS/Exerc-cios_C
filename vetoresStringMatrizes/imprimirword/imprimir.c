/*
. Um dos principais benefícios de aprender a programar é o fato de que é possível 
automatizar tarefas repetitivas. Dessa forma, faça um programa que leia uma palavra 
e o número de vezes que se deseja imprimi-la. */
#include <stdio.h>
#include <string.h>
int main(){
    char word[10];
    int repeat,i;

    printf("digite uma palvra: ");
    fgets(word,sizeof(word),stdin);
    printf("digite o numero de  impressoes: ");
    scanf("%d",&repeat);

  for ( i = 0; i < repeat; i++)
  {
    printf("==========\n");
    printf("%s",word);
    printf("==========\n");
  }
  
}