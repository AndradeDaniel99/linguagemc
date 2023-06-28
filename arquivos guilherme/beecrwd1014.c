#include <stdio.h>

int main(){

    int distanciaTotal;
    double combustivelGasto, kmRodados;

    scanf("%d\n", &distanciaTotal);
    scanf("%lf", &combustivelGasto);

    kmRodados = distanciaTotal / combustivelGasto;

    printf("%.3lf km/l\n", kmRodados);


    return 0;
}