#include <stdio.h>

int main () {

    float A, B;

    scanf("%f\n%f", &A, &B);

    double media = ((3.5 * A + 7.5 * B) /11);


    printf("MEDIA = %.5f\n", media);
    
    return 0;
}