/*
. O processamento de dados textuais, atualmente, é bastante avançado, e já existem 
bibliotecas capazes de auxiliar neste tipo de situação. Elabore um programa que leia 
uma palavra e, se ela tiver número ímpar de caracteres, imprima todas as suas vogais.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define VOGAL "aeiou"

int main() {
    char word[16];
    char v[16];   
    int i, j, c = 0;
    printf("Digite uma palavra de ate 15 caracteres: ");
    fgets(word, sizeof(word), stdin);

    int tamanho = strlen(word);
    if ((tamanho-1) % 2 != 0) {
        for (i = 0; i < tamanho; i++) {
            for (j = 0; j < strlen(VOGAL); j++) {
                if (word[i] == VOGAL[j]) {
                    v[c++] = word[i];
                }
            }
        }
        v[c] = '\0';
        printf("Vogais na palavra (com numero impar de caracteres): %s\n", v);
    } else {
        printf("A palavra nao tem um numero impar de caracteres.\n");
    }
    return 0;
}
