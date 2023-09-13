#include <stdlib.h>
#include <stdio.h>
#include "Model/funcionario.h"

void listar(Funcionario *funcionarios) {
    char entrada;
    system("clear");
    for (int i = 0; i < 500; i++) {
        if (funcionarios[i].idade != 0){
            printf("-------------------------------------------\n");
            printf("Matricula: %d\n", funcionarios[i].matricula);
            printf("Nome: %s", funcionarios[i].nome);
            printf("Idade: %d\n", funcionarios[i].idade);
            printf("CPF: %ld\n", funcionarios[i].cpf);
            printf("-------------------------------------------\n");
        }
    }
    printf("Pressione qualquer tecla para voltar...\n");
    fflush(stdin);
    scanf("%c", &entrada);
}