#include <stdlib.h>
#include <stdio.h>
#include "Model/funcionario.h"

void deletar(Funcionario *funcionarios) {
    int entrada, escolha, erro;
    char saida;
    printf("Digite a matricula: \n");
    scanf("%d", &entrada);

    if (funcionarios[entrada].idade != 0) {
        printf("-------------------------------------------\n");
        printf("Matricula: %d\n", funcionarios[entrada].matricula);
        printf("Nome: %s", funcionarios[entrada].nome);
        printf("Idade: %d\n", funcionarios[entrada].idade);
        printf("CPF: %ld\n", funcionarios[entrada].cpf);
        printf("-------------------------------------------\n");

        printf("Deseja deletar este funcionario? \n");
        printf("1 - SIM       2 - NAO      3 - SAIR\n");
        scanf("%d", &escolha);
        if (escolha == 1){
            funcionarios[entrada].idade = 0;
            printf("Funcionario deletado com sucesso!\n");
            printf("Pressione qualquer tecla para voltar...\n");
            scanf("%c", &saida);
        } else if (escolha == 2) {
            deletar(funcionarios);
        }
    } else {
        printf("Essa matricula nao existe.\n");
        printf("1 - Tentar novamente      2 - Voltar\n");
        scanf("%d", &erro);
        if (erro == 1) {
            deletar(funcionarios);
        } 
    }
}