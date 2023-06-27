#include<stdio.h>
#include<math.h>

void bee1011(){
    double R, pi, volume;
    pi = 3.14159;
    scanf("%lf", &R);
    volume = ((4.0/3)*pi*pow(R,3));
    printf("VOLUME = %.3lf\n", volume);
}

int main(){
    bee1011();
    return 0;
}
