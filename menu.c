#include <stdio.h>
#include <stdlib.h>



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

void editar(Funcionario *funcionarios) {
    //PEGAR A QUANTIDADE DE FUNCIONARIOS CADASTRADOS
    int count = 0;
    for (int i = 0; i < sizeof(funcionarios); i++) {
        if (funcionarios[i].idade != 0) {
            count++;
        }
    }

    int vetor_ordenado[count];

    //ADICIONAR SOMENTE OS FUNCIONARIOS CADASTRADOS NO VETOR ORDENADO
    for (int i = 0; i < count; i++) {
        if (funcionarios[i].idade != 0) {
            vetor_ordenado[i] = funcionarios[i].cpf;
        }
    }
    
    //ORDENAR O VETOR EM ORDEM CRESCENTE
    int temp = 0;
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++){
            if (vetor_ordenado[i] > vetor_ordenado[j]) {
                temp = vetor_ordenado[i];
                vetor_ordenado[i] = vetor_ordenado[j];
                vetor_ordenado[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++){
        printf("%d\n", vetor_ordenado[i]);
    }
    
    int cpf = 1231;
    //BUSCA BINARIA
    int tamanho = count;
    for (int i = 0; i < tamanho; i++) {
        if (vetor_ordenado[i] > tamanho/2) {
            for (size_t i = 0; i < count; i++)
            {
                /* code */
            }
            
        }
        
    }
    
    
}

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

void zerar_idades(Funcionario *funcionarios) {
    for (int i = 0; i < 500; i++){
        funcionarios[i].idade = 0;
    } 
}

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

int main() {
    Funcionario funcionarios[500];
    zerar_idades(funcionarios);
    menu(funcionarios);

    return 0;
}
