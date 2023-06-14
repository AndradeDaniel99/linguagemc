#include <stdio.h>

int main(){
    //voce pode atribuir um valor a uma variavel no momento em que ela for declarada
    int inteiro = 1;

    //ou pode atribuir depois
    float pi;

    printf("%f", pi); // vai imprimir 0.0

    pi = 3.14159;

    //voce tambem pode declarar mais de uma variavel do mesmo tipo em uma linha
    char letra1, letra2, letra3;
    letra1 = 'd';
    letra2 = 'a';
    letra3 = 'v';
    
    return 0;
}
