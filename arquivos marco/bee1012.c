#include<stdio.h>

int main (){

    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    double tri = (( A * C )/2);
    double cir = (3.14159 * (C * C));
    double tra = ( ( ( A + B ) * C ) / 2 );
    double qua = (B * B);
    double ret = (A * B);

    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", tra);
    printf("QUADRADO: %.3lf\n", qua);
    printf("RETANGULO: %.3lf\n", ret);

    return 0;
}