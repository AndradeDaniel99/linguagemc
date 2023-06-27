#include <stdio.h>

int main(){
    int entrada;
    printf("Escolha uma opcao: \n");
    printf("1 - cadastrar\n");
    printf("2 - editar\n");
    printf("3 - listar\n");
    printf("4 - deletar\n");
    printf("qualquer numero - sair do programa\n");
    scanf("%d", &entrada);

    switch (entrada){
    case 1:
        //cadastrar();
        break;
    case 2:
        //editar();
        break;
    default:
        return 0;
    }
    
    
    
    
    
    


    return 0;
}
