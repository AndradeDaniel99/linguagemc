#include <stdio.h> //importa a biblioteca stdio
#include <math.h> //importa a biblioteca math

int main(){
    // voce pode declarar varias variaveis do mesmo tipo em uma linha
    double a = 121.0, b = 0.5;
    double potencia, raiz;

    printf("%.2f \n", a + b);
    printf("%.2f \n", a - b);
    printf("%.2f \n", a * b);
    printf("%.2f \n", a / b);

    //potenciacao VEM DA MATH.H
    potencia = pow(49, b);
    printf("potencia: %.1lf \n", potencia);

    //radiciacao VEM DA MATH.H
    raiz = sqrt(a);
    printf("raiz: %.1lf \n", raiz);

    return 0;
}
