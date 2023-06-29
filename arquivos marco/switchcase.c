#include<stdio.h>

int main(){

    int entrada;
    printf("Escolha um vingador : \n");
    printf("1 - Homem aranha\n");
    printf("2 - Homem de ferro\n");
    printf("3 - Hulk\n");
    printf("4 - Pantera Negra\n");
    printf("5 - Viuva Negra\n");

    scanf("%d", &entrada);

    switch (entrada)
    {
    case 1:
    printf("1 - Homem aranha\n");
        break;
    case 2:
    printf("2 - Homem de ferro\n");
        break;
    case 3:
    printf("3 - Hulk\n");
        break;
    case 4:
    printf("4 - Pantera Negra\n");
        break;
    case 5:
    printf("5 - Viuva Negra\n");
        break;
    default:
    printf("Voce não digitou uma opção válida!\n");
        break;
    }

    return 0;
}