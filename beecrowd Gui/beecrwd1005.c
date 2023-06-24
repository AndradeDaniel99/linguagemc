#include <stdio.h>

//Como fazer a média de duas notas

int main(){

    double a, b, media;

    scanf("%lf\n%lf", &a, &b);
    media = (a*3.5 + b*7.5) / (3.5 + 7.5);
    printf("MEDIA = %.5lf\n", media);

    return 0;
}