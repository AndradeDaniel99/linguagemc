#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){

    int i = 4;

    int *ptr; // declaracao de ponteiro

    ptr = &i; //atribuicao de apontamento, agora ptr aponta para i

    system("cls");

    printf("endereco de i = %p\n", &i); // Apos executar esse print, sera impresso o endereço da variavel "i"
    printf("valor de ptr = %p\n", ptr); // Apos executar esse print, sera impresso o mesmo endereço da variavel anterior (i) atraves do "ponteiro", que tambem é o valor do ptr
    printf("endereco do ponteiro = %p\n", &ptr);  // Apos executar esse print, sera impresso o endereço da variavel "ponteiro", por isso o uso do (&)
    printf("valor da variavel que ptr aponta = %d\n\n", *ptr); // Apos executar esse print, sera impresso o VALOR armazenado dentro da variavel que o ponteiro está apontando (i) = 4

    // Exemplo usando ponteiro com um vetor:

    int v[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ponteiro = v; // declaracao e atribuicao de ponteiro na mesma linha
    int *outro_ponteiro = ponteiro;
    printf("Menor endereco do vetor : %p\n", &v);  // Apos executar esse print, sera impresso o menor endereço da variavel vetor "v"
    printf("Mesmo endereco apontado pelo ponteiro : %p\n", ponteiro); // Apos executar esse print, sera impresso o mesmo menor endereço da variavel anterior (v) atraves do "ponteiro", que tambem é o valor do ponteiro
    printf("Valor da primeira posicao do vetor : %d\n\n", *ponteiro); // Apos executar esse print, sera impresso o VALOR armazenado dentro do menor endereco que o ponteiro está apontando (v) = 0, pois esta na primeira posicao

    printf("\n%d", v[1]);
    printf("\n%d", ponteiro[1]);
    printf("\n%d\n\n", outro_ponteiro[1]);

    return 0;
}
