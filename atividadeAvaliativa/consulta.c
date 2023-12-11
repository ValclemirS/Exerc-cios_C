#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

// Constants
#define MAX_APPOINTMENTS 300
#define MAX_NAME_LENGTH 100

// Struct definition
struct Consulta {
    char nome[MAX_NAME_LENGTH];
    int dia;
    int hora;
};

// Global variables
struct Consulta agenda[MAX_APPOINTMENTS];
int qtdAgendamento;

// Function to check appointment availability
bool verificarDisponibilidade(int diaAgenda, int horaAgenda) {
    if (diaAgenda < 1 || diaAgenda > 31) {
        printf("Dia inválido\n");
        return false;
    }

    if (horaAgenda < 8 || horaAgenda > 20) {
        printf("Clínica fechada neste horário ou hora inválida\n");
        return false;
    }

    return true;
}

// Function to schedule appointments
void agendarConsulta() {
    int diaAgenda, horaAgenda;

    printf("Qual dia do mês você quer agendar?\n");
    scanf("%d", &diaAgenda);

    printf("Qual hora do dia você quer agendar?\n");
    scanf("%d", &horaAgenda);

    // Clear input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    if (verificarDisponibilidade(diaAgenda, horaAgenda)) {
        printf("Horário disponível\n");
        printf("Vamos confirmar seu agendamento\n");

        struct Consulta novoAgendamento;
        novoAgendamento.dia = diaAgenda;
        novoAgendamento.hora = horaAgenda;

        printf("Qual seu nome?\n");
        fgets(novoAgendamento.nome, MAX_NAME_LENGTH, stdin);

        agenda[qtdAgendamento] = novoAgendamento;
        qtdAgendamento++;

        printf("Agendamento realizado!\n");
    } else {
        printf("Horário não disponível\n");
    }
}

// Function to list scheduled appointments
void listarConsulta() {
    int i;
    for (i = 0; i < qtdAgendamento; i++) {
        printf("==============================\n");
        printf("Nome: %s", agenda[i].nome);
        printf("Dia: %d\n", agenda[i].dia);
        printf("Hora: %d\n", agenda[i].hora);
    }
}

// Main function
int main() {
    setlocale(LC_ALL, "");

    int opcao;
    qtdAgendamento = 0;

    do {
        printf("Deseja uma opção desejada?\n");
        printf("1 - Agendar\n");
        printf("2 - Listar\n");
        printf("3 - Sair\n");
        scanf("%d", &opcao);

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
                printf("Saindo do programa...\n");
                break;
            }
            default: {
                printf("Opção inválida\n");
                break;
            }
        }
    } while (opcao != 3);

    return 0;
}
