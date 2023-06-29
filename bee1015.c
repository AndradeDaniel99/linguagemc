#include<stdio.h>
#include<math.h>

int main(){
    double x1, y1, x2, y2, resultado;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    // variavel x1 elevado a y1
    //x1 = pow(x1, y1);

    resultado = pow((x2 - x1), 2);
    resultado = resultado + pow((y2 - y1), 2);
    resultado = sqrt(resultado);


    printf("%.4lf\n", resultado);
    return 0;
}
