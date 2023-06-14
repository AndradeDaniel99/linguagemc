#include <stdio.h>

int main(){

    int vetor[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            vetor[i][j] = 1;
            if (i==(j+1)){
                vetor[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("  %d", vetor[i][j]);
        }
        printf("\n");
    }
    
    // mocorongo

    return 0;
}
