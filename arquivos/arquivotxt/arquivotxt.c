#include <stdio.h>
#include <string.h>
 int main(){
    FILE*hello;
    char frase[20];
    hello= fopen("hellowold.txt","w");
    if(hello==NULL){
        printf("erro ao abir o arquivo\n");
    }else{
        printf("digite uma frase: ");
        fgets(frase, sizeof(frase), stdin);
        frase[strcspn(frase, "\n")] = '\0';
        fprintf(hello, "%s",  frase);
         if (ferror(hello))
            {
                printf("Erro na gravacao!!!\n");
            }else
            {
                printf("Gravacao efetuada com sucesso!\n");
            }
    }
     fclose(hello);
 }
 