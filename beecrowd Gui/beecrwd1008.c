#import <stdio.h>

int main(){

//sh = salario hora, ht = horas trabalhadas
    int nfunc, ht;
    double sh, salario;

    scanf("%d\n,%d", &nfunc, &ht);
    scanf("%lf\n", &sh);
    salario = ht * sh;

    printf("NUMBER = %d\n", nfunc);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}

//#### calculo ta dando errado