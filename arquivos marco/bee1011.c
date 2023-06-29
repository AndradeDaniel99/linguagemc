#include <stdio.h>

int main (){

    double raio;
    double pi = 3.14159;
    double esfera;

    scanf("%lf", &raio);

    esfera = ( (4.0/3) * pi * (raio * raio * raio));

    printf("VOLUME = %.3lf\n", esfera);

    return 0;
}