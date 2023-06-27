#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double pontos(){
    double x1, y1, x2, y2, distancia;
    scanf("%lf %lf\n%lf %lf", &x1, &y1, &x2, &y2);
    distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    return distancia;
}
int main(){
    system("cls");
    double distancia = pontos();
    printf("%.4f\n", distancia);
    return 0;
}
