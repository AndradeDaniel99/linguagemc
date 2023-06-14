#include <stdio.h>

int main(){
    
    float numero1, numero2;
    float media;

    scanf("%f", &numero1); // um scanf em cada linha
    scanf("%f", &numero2);

    media = (numero1 + numero2) / 2.0;

    printf("a media eh: %.2f \n", media);

    scanf("%f\n%f", &numero1, &numero2); // dois scanfs em uma linha, uma entrada, enter, outra entrada

    media = (numero1 + numero2) / 2.0;

    printf("a media eh: %.2f \n", media);

    scanf("%f %f", &numero1, &numero2); // dois scanfs em uma linha, uma entrada, espaco, outra entrada

    media = (numero1 + numero2) / 2.0;

    printf("a media eh: %.2f \n", media);

    return 0;
}
