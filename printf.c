#include <stdio.h>

int main(){
    
    int inteiro = 123; 
    int dez = 10;
    float a = 5.2;
    double b = 4.8;

    char letra_d = 'd';
    printf("%c", letra_d);
    
    //imprime um inteiro
    printf("%i", dez);

    //imprime um float
    printf("%f", a);

    //imprime um double
    printf("%lf", b);

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
