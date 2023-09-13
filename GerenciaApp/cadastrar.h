#include <stdlib.h>
#include <stdio.h>
#include "Model/funcionario.h"

void cadastrar(Funcionario *funcionarios) {
    int entrada;
    for (int i = 0; i < 500; i++) {
        if (funcionarios[i].idade == 0){
            printf("Digite o nome do funcionario: \n");
            fflush(stdin);
            fgets(funcionarios[i].nome, 100, stdin);
            printf("Digite a idade do funcionario: \n");
            scanf("%d", &funcionarios[i].idade);
            printf("Digite o cpf do funcionario: \n");
            scanf("%ld", &funcionarios[i].cpf);
            funcionarios[i].matricula = i;
            system("clear");
            printf("O funcionario %s foi cadastrado e sua matricula é %d\n", funcionarios[i].nome, funcionarios[i].matricula);
            printf("Deseja cadastrar outro funcionario?\n");
            printf("1 - sim       2 - nao\n");
            scanf("%d", &entrada);
            switch (entrada) {
            case 1:
                cadastrar(funcionarios);
                break;
            case 2: 
                break;
            default:
                break;
            }
            break;
        }
    }
}