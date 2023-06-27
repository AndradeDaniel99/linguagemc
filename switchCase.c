//escreva um programa que receba uma entrada inteira,
//que representa uma opção de Vingadores e a saída
//deve ser uma frase correspondente a opcao escolhida.

#include <stdio.h>

int main(){

    int entrada;
    printf("Escolha um vingador: \n");
    printf("1 - homem aranha \n");
    printf("2 - homem de ferro \n");
    printf("3 - hulk \n");
    printf("4 - pantera negra \n");
    printf("5 - viuva negra \n");
    scanf("%d", &entrada);

    switch (entrada)
    {
    case 1:
    printf("voce eh o homem aranha \n");
        break;
    case 2:
    printf("voce eh o homem de ferro \n");
        break;
    case 3:
    printf("voce eh o hulk \n");
        break;
    case 4:
    printf("voce eh o pantera negra \n");
        break;
    case 5:
    printf("voce eh a viuva negra \n");
        break;
    
    default:
    printf("voce nao digitou um número válido \n");
        break;
    }

    return 0;
}