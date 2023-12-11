/*
um programador que se preze necessita dominar vários tipos de estruturas de dados. Uma das estruturas mais importantes, em programas, são as matrizes. Assim, 
construa um programa que recebe duas matrizes inteiras de ordem 5 e imprima a 
soma e a diferença entre elas.*/
#include <stdio.h>
#include <stdlib.h>
#include  <math.h>

int main(){
    int i,j,matrizA[5][5],matrizB[5][5],soma[5][5],diferenca[5][5];
    srand(time(NULL));
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
           int numero= rand()%100;
            matrizA[i][j]=numero;
        }
    }
     for(i=0;i<5;i++){
        for(j=0;j<5;j++){
           int numero= rand()%100;
            matrizB[i][j]=numero;
        }
    }
     for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf(" matrizA O elemento da linha %d, coluna %d : %d\n", i, j, matrizA[i][j]);
            printf(" matrizB O elemento da linha %d, coluna %d : %d\n", i, j, matrizB[i][j]);
        }
    }
    printf("============soma das matrizes=============\n");
     for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            soma[i][j]=matrizA[i][j]+matrizB[i][j];
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("matrizA + matrizB na linha %d, coluna %d  e igual= %d\n", i, j, soma[i][j]);
        }
    }
     printf("============diferenca das matrizes=============\n");
     for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            diferenca[i][j]=matrizA[i][j]-matrizB[i][j];
        }
    }
   
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("matrizA - matrizB na linha %d, coluna %d  e igual= %d\n", i, j, diferenca[i][j]);
        }
    }

}



