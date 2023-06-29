#include <stdio.h>

int main (){

    int codigo1, quantidade1;
    float valorporunidade1;

    int codigo2, quantidade2;
    float valorporunidade2;

    double valorfinal;


    scanf("%i %i %f\n", &codigo1, &quantidade1, &valorporunidade1);
    scanf("%i %i %f\n", &codigo2, &quantidade2, &valorporunidade2);

valorfinal = ((quantidade1 * valorporunidade1) + (quantidade2 * valorporunidade2));

    printf("VALOR A PAGAR: R$ %.2lf\n", valorfinal);

    return 0;
}