#include<stdio.h>

void consumo(){
    int x;
    double y;
    scanf("%d\n%lf", &x, &y);
    printf("%.3lf km/l\n", x/y);
}

int main(){
    consumo();
 return 0; 
}
