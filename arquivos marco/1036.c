#include <stdio.h>
#include <math.h>
 
int main() {
double A, B, C, R1, R2;

scanf("%lf\n%lf\n%lf", &A, &B, &C);

double delta = (( B * B ) - 4 * A * C);

R1 = (((0 - B) + (pow((delta), (0.5))) )/(2 * A));
R2 = (((0 - B) - (pow((delta), (0.5))) )/(2 * A));

  if ((A == 0)||(delta < 0)||(delta == 0)){
    printf("Impossivel calcular\n");
}
else {  
    printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
}
    return 0;
}