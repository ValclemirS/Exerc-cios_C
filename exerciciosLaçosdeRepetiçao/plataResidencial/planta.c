/*
 Construa um programa que possibilite calcular a área total de uma residência (sala, 
cozinha, banheiro, quartos etc.). O programa deve solicitar a entrada do nome, a 
largura e o comprimento de determinado cômodo até que o nome do cômodo seja 
“FIM”. O programa deve apresentar o valor total acumulado da área residencial.
*/

#include <stdio.h>
#include <string.h>

int main() {
    float largura, comprimento, areatotal = 0, area;
    int c = 0;
    char comodo[30];
    printf("Digite o nome do comodo:\n Ou digite FIM para encerrar:\n");
    while (strcmp(comodo, "FIM") != 0) {
        fgets(comodo, sizeof(comodo), stdin);
        comodo[strcspn(comodo, "\n")] = '\0';//limpar o carctere \n
        if (strcmp(comodo, "FIM") != 0) {//strcmp comapra strings
            c++;
        printf("Digite a largura do comodo %s:\n", comodo);
        scanf("%f", &largura);
        printf("Digite o comprimento do cômodo %s:\n", comodo);
        scanf("%f", &comprimento);
        area = largura * comprimento;
        areatotal += area;
        printf("Novo comodo registrado com sucesso:\n");
        printf("Comodo registrado: %s\n", comodo);
        printf("Medidas: %.2f x %.2f.\narea desse comodo: %.2f\n", largura, comprimento, area);
        while (getchar() != '\n');//limpa o buffer do teclado pelo metodo stdin
        printf("Digite o nome do comodo:\n Ou digite FIM para encerrar:\n");
        }
    }
    printf("area total da residencia com %d comodos e de: %.2f\n", c, areatotal);
    printf("Programa encerrado com sucesso");
    return 0;
}
