#include <stdio.h>

void bee1010(){
   int c1, c2, n1, n2;
   double valor1, valor2, pagar;
   scanf("%d %d %lf\n", &c1, &n1, &valor1);
   scanf("%d %d %lf", &c2, &n2, &valor2);
   pagar = (n1*valor1) + (n2*valor2);
   printf("VALOR A PAGAR: R$ %.2lf\n", pagar);
}


int main(){
    bee1010();
    return 0;
}