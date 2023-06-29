#include<stdio.h>

int main (){

    int distancia;
    double gasolina; 
    double consumo;

    scanf("%i\n%lf", &distancia, &gasolina);

    consumo = (distancia/gasolina);

    printf("%.3lf km/l", consumo);

    return 0;
}