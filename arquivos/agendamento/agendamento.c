#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>

#define MAX_APPOINTMENTS 300
#define MAX_NAME_LENGTH 100

struct Consulta {
    char nome[MAX_NAME_LENGTH];
    int dia;
    int hora;
};

struct Consulta agenda[MAX_APPOINTMENTS];
int qtdAgendamento;

bool verificarDisponibilidade(int diaAgenda, int horaAgenda) {
    if (diaAgenda < 1 || diaAgenda > 31) {
        printf("Dia invalido\n");
        return false;
    }

    if (horaAgenda < 8 || horaAgenda > 20) {
        printf("Clinica fechada neste horario ou hora invalida\n");
        return false;
    }

    return true;
}

void agendarConsulta() {
    int diaAgenda, horaAgenda;

    printf("Qual dia do mes voce quer agendar?\n");
    scanf("%d", &diaAgenda);

    printf("Qual hora do dia voce quer agendar?\n");
    scanf("%d", &horaAgenda);
    system("cls");
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    if (verificarDisponibilidade(diaAgenda, horaAgenda)) {
        printf("Horario disponivel\n");
        printf("Vamos confirmar seu agendamento\n");

        struct Consulta novoAgendamento;
        novoAgendamento.dia = diaAgenda;
        novoAgendamento.hora = horaAgenda;

        printf("Qual seu nome?\n");
        fgets(novoAgendamento.nome, MAX_NAME_LENGTH, stdin);

        agenda[qtdAgendamento] = novoAgendamento;
        qtdAgendamento++;

        printf("Agendamento realizado!\n");
        system("cls");
    } else {
        printf("Horario nao disponivel\n");
        system("cls");
    }
}

void listarConsulta() {
    int i;
    for (i = 0; i < qtdAgendamento; i++) {
        printf("==============================\n");
        printf("Nome: %s", agenda[i].nome);
        printf("Dia: %d\n", agenda[i].dia);
        printf("Hora: %d\n", agenda[i].hora);
        system("cls");
    }
}

void salvarAgendamentos() {
    FILE *arquivo;
    arquivo = fopen("agendamentos.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    for (int i = 0; i < qtdAgendamento; i++) {
        fprintf(arquivo, "Nome: %s", agenda[i].nome);
        fprintf(arquivo, "Dia: %d\n", agenda[i].dia);
        fprintf(arquivo, "Hora: %d\n", agenda[i].hora);
        fprintf(arquivo, "==============================\n");
    }

    fclose(arquivo);
    printf("Agendamentos salvos em 'agendamentos.txt'.\n");
}

int main() {
    setlocale(LC_ALL, "");

    int opcao;
    qtdAgendamento = 0;

    do {
        printf("Deseja uma opcao desejada?\n");
        printf("1 - Agendar\n");
        printf("2 - Listar\n");
        printf("3 - Salvar Agendamentos\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);
        system("cls");
        switch (opcao) {
            case 1: {
                agendarConsulta();
                break;
            }
            case 2: {
                listarConsulta();
                break;
            }
            case 3: {
                salvarAgendamentos();
                break;
            }
            case 4: {
                printf("Saindo do programa...\n");
                break;
            }
            default: {
                printf("Opção invalida\n");
                break;
            }
        }
    } while (opcao != 4);

    return 0;
}
