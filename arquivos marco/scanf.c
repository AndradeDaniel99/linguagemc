#include <stdio.h>


int main(){

float numero1, numero2;
float media;


    scanf("%f", &numero1);
    scanf("%f", &numero2);
    media = (numero1 + numero2) / 2.0;

    printf("O número 1 é: %f\n\nO número 2 é: %f\n\n", numero1, numero2);
    printf("A média dos números 1 e 2 é: %f\n\n", media);

// comentário
    
    scanf("%f",&numero1);


    return 0;
}