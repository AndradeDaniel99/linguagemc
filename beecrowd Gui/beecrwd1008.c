#include <stdio.h>

int main(){

    int nfunc, horas_trabalhadas;
    double salario_hora, salario;

    scanf("%d\n%d", &nfunc, &horas_trabalhadas);
    scanf("%lf", &salario_hora);
    salario = horas_trabalhadas * salario_hora;

    printf("NUMBER = %d\n", nfunc);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}