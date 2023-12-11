/*
magine que você está desenvolvendo uma pequena funcionalidade dentro de um 
programa que será utilizado como processador de texto. Assim sendo, escreva uma 
função que receba um caractere e retorne zero se for vogal ou 1 se for uma consoante, um número ou caractere especial.*/
#include <stdio.h>
#include <stdlib.h>

int retonarCaractere(char caractere){
    if ((caractere == 'A')||(caractere =='E')||
 (caractere =='I')||(caractere =='O')||
 (caractere == 'U')||(caractere == ' ' )){
     return 0;
 }else{
    return 1;
 }
}
int main(){
    char caractere1='C';
    int retorno;

    retorno=retonarCaractere(caractere1);
    printf("%d",retorno);


}