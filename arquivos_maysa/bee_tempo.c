#include<stdio.h>

void tempo(){
    int segundos, horas, minutos;

    scanf("%d", &segundos);

    horas = segundos/3600;
    segundos %= 3600;
    minutos = segundos/60;
    segundos %= 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
}

int main(){
    tempo();
    return 0;
}
