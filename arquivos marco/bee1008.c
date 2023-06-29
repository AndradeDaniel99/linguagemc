#include <stdio.h>

int main (){

    int funcionario;
    int horas;
    double valorhora;

    scanf("%i", &funcionario);
    scanf("%i", &horas);
    scanf("%lf", &valorhora);
    
    double salario = horas * valorhora;

    printf("NUMBER = %i\n", funcionario);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}