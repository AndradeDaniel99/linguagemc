#include <stdlib.h>
#include <stdio.h>

// #include "Model/funcionario.h"
#include "cadastrar.h"
#include "editar.h"
#include "listar.h"
#include "deletar.h"

void menu(Funcionario *funcionarios) {
    int entrada;

    system("clear");
    printf("---Gerenciamento de Funcionarios---\n");
    printf("1 - Cadastrar Funcionarios\n");
    printf("2 - Editar Funcionario\n");
    printf("3 - Listar Funcionarios\n");
    printf("4 - Deletar Funcionario\n");
    printf("5 - Sair\n");

    scanf("%d", &entrada);

    switch (entrada) {
    case 1:
        cadastrar(funcionarios);
        menu(funcionarios);
        break;
    case 2:
        editar(funcionarios);
        break;
    case 3:
        listar(funcionarios);
        menu(funcionarios);
        break;
    case 4:
        deletar(funcionarios);
        menu(funcionarios);
        break;
    case 5:
        break;
    default:
        menu(funcionarios);
        break;
    }
}