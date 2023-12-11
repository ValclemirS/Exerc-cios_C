#include <stdio.h>
#include <string.h>

int main()
{
    FILE *arq;
    char nome[50], idade[10];

    arq = fopen("arquivo.csv", "w");
    if (arq == NULL)
    {
        printf("O arquivo nao foi aberto. Ocorreu um erro!\n");
    }
    else
    {
        printf("Cadastro:\n");
        fprintf(arq, "produto,quantidade\n");

        do
        {
            printf("produto: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0';

            if (strcmp(nome, "fim") == 0)
                break;

            printf("quantidade: ");
            fgets(idade, sizeof(idade), stdin);
            idade[strcspn(idade, "\n")] = '\0';
            fprintf(arq, "%s,%s\n", nome, idade);

            if (ferror(arq))
            {
                printf("Erro na gravacao!!!\n");
                break;
            }
            else
            {
                printf("Gravacao efetuada com sucesso!\n");
            }

        } while (1); 

        fclose(arq);
    }

    return 0;
}
