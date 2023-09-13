#include <stdio.h>

int soma_entre_dois_numeros(int a, int b){
    int soma = a + b;
    return soma;
}

void cadastrar(){

}

void menu(int entrada, funcionarios) {
    switch (entrada)
    {
    case 1:
        cadastrar(funcionarios);
        break;
    case 2:
        editar(funcionarios);
        break;
    case 3:
        listar(funcionarios);
        break;
    case 5:
        return 0;
    
    default:
        break;
    }
}


int main(){
    Funcionario funcionarios[500];
    int entrada;
    scanf("%d %d", &entrada);
    menu(entrada, funcionarios);
    return 0;
}
