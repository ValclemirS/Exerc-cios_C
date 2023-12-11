/*
o jardim de infância, durante o processo de ensino e aprendizagem, um professor 
costuma ensinar o tema “vogais e consoantes” de maneira bastante lúdica. Para auxiliar 
o professor, construa uma função que receba um nome e retorne o número de vogais */
#include <stdio.h>

int contarVogais(char nome[20]){
int i, tam, qtd;
 tam = strlen(nome);
 nome = strupr(nome);
 qtd = 0;
 for (i=0;i<tam;i++)
 {
 if ((nome[i] == 'A') || (nome[i] =='E') || 
 (nome[i] =='I') || (nome[i] =='O') || 
 (nome[i] == 'U')){
    qtd++;
 }

 }
 return qtd;
}
int main()
{
 int total;
 char palavra[20];
 printf("Informe a string: ");
 gets(palavra);
 total = contarVogais(palavra);
 printf("A quantidade de vogais da string %s e %d\n", palavra, total);
}