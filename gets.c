#include <stdio.h>

int main()
{
    char nome[50];
    fgets(nome, 50, stdin);
    printf("seu nome eh %s\n", nome);

    return 0;
}

