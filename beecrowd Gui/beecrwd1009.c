#include <stdio.h>

int main(){
    
    //esse char armazena apenas um caractere
    char vendedor;
    double salario_fixo, total_vendas, total;
    
    scanf("%s\n", &vendedor);
    scanf("%lf\n %lf", &salario_fixo, &total_vendas);
    
    total = (salario_fixo + ((total_vendas * 15)/100));
    
    printf("TOTAL = R$ %.2lf\n", total);
    
    return 0;
}