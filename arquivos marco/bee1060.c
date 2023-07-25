#include<stdio.h>

int main(){

double entrada;
int i;
int contagem = 0;

for (i = 1; i <= 6; i++) {

    scanf("%lf", &entrada);

    if (entrada > 0){
        contagem ++;
        }
}

printf("%i valores positivos\n", contagem);
    return 0;
}