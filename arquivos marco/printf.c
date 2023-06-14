#include <stdio.h>

int main(){
    
    int inteiro = 5;
    int dez = 10;
    float a = 5.2;
    double b = 4.8;
    char letra_d = 'd';


    //imprime um inteiro
    printf("%c\n\n", letra_d);

    //imprime um inteiro
    printf("%i\n\n", inteiro);

    //imprime um float
    printf("%f\n\n", a);

    //imprime um double
    printf("%lf\n\n", b);

    //imprime um inteiro dentro de uma frase
    printf("\nMeu inteiro vale %i, \ne dez vale %i", inteiro, dez);

    //pular linha == enter
    printf("\nMeu inteiro vale %i\n\n\n", inteiro);

    //imprimir mais de uma variavel
    printf("Meu inteiro vale: %i, e a variavel a vale: %f \n\n", inteiro, a);

    //formatar um float/double
    printf("a = %.1f, b = %.2lf \n", a, b);

    return 0;
}