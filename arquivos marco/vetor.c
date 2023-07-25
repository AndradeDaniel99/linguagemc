#include <stdio.h>

int main() {


    char nome[20];  // Vetor de caracteres para armazenar um nome com até 20 caracteres

printf("Digite seu nome: ");
scanf("%19s", nome);  // Lê até 19 caracteres (20º é reservado para o caractere nulo '\0')

printf("Olá, %s!\n", nome);
    
    return 0;
}