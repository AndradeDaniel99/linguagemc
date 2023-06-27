#include<stdio.h>

void gasto(){
    double qtd,  x, y;
    scanf("%lf\n%lf",  &x, &y);
    qtd = (x*y)/12;
    printf("%.3lf\n", qtd);
}

int main(){
    gasto();
    return 0;
}
