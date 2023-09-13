#include <stdio.h>
#include "Library/menu.h"
#include "Model/funcionario.h"


void zerar_idades(Funcionario *funcionarios) {
    for (int i = 0; i < 500; i++){
        funcionarios[i].idade = 0;
    } 
}

int main() {
    Funcionario funcionarios[500];
    zerar_idades(funcionarios);
    menu(funcionarios);

    return 0;
}