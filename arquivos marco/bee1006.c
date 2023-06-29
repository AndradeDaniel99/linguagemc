#include <stdio.h>

int main () {

    float A, B, C;

    scanf("%f\n%f\n%f", &A, &B, &C);

    double media = ((2 * A + 3 * B + 5 *C) /10);


    printf("MEDIA = %.1f\n", media);
    
    return 0;
}