#import <stdio.h>

//calcular a diferença
int main(){

    int A, B, C, D, diferenca;

    scanf("%d\n%d\n%d\n%d", &A, &B, &C, &D);
    diferenca = (A*B - C*D);

    printf("DIFERENCA = %d\n", diferenca);
    return 0;
}