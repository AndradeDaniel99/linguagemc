#include <stdio.h>
 
int main(){
    int tamanho = 10;
    int vetor[6] = {213, 452, 7465, 673, 6345, 52};
    vetor[1] = 2;

    int matriz[10][6];
    matriz[0][1] = 7565;
    //matriz = {12}{123,3, 31, 321};

    char frase[1000] = "meu nome "; //STRING SEMPRE SE DECLARA COM ASPAS DUPLAS
    fgets(frase, 9, stdin);
 
    return 0;
}
