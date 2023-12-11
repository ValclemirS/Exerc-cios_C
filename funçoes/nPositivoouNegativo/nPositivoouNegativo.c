/*
 É comum, em uma aplicação, ter de determinar quais números são pares ou ímpares 
entre todos os valores de um conjunto de dados. Dessa forma, faça um programa 
que verifica se determinado número é positivo ou negativo, por meio de uma função. 

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void verificarSinal(int x){
        if(x>=0){
            printf("numero positivo:%d\n",x);
        }else{
             printf("numero negativo:%d\n",x);
        }
}

int main(){
    int n[4];
    int i;
    for(i=0;i<4;i++){
    printf("Digite 4 numeros");
    scanf("%d",&n[i]);
}
for ( i = 0; i < 4; i++)
{
    verificarSinal(n[i]);
}

}