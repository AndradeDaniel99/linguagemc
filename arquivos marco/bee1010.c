#include <stdio.h>

int main (){

    int codigo1, quantidade1;
    double valorporunidade1;
    int codigo2, quantidade2;
    double valorporunidade2;
    double valorfinal;

    

    scanf("%i %i %lf\n%i %i %lf\n", &codigo1, &quantidade1, &valorporunidade1, &codigo2, &quantidade2, &valorporunidade2);
    
    valorfinal = quantidade1 * valorporunidade1 + quantidade2 * valorporunidade2;

    printf("VALOR A PAGAR: R$ %.2lf", valorfinal);

    return 0;
}