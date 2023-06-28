#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, C, maior, MAIOR;

    scanf("%d %d %d", &A, &B, &C);
    maior = (A + B + abs(A - B))/2;
    MAIOR = (maior + C + abs(maior - C))/2;

    printf("%d eh o maior\n", MAIOR);

    return 0;
}