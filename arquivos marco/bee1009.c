#include<stdio.h>

int main (){

    char texto[10];
    double salario;
    double vendas; 
    double total;

    fgets(texto, 10, stdin);
    scanf("%lf\n%lf", &salario, &vendas);

    total = (salario + ((vendas * 15)/100));
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}