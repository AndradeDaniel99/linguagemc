#include<stdio.h>
#include<math.h>

void area(){
   double A, B, C, pi, triangulo, circulo, trapezio, quadrado, retangulo;
   pi = 3.14159; 
   scanf("\n%lf %lf %lf", &A, &B, &C);
   triangulo = (A*C)/2;
   circulo = pow(C,2)*pi;
   trapezio = ((A+B)*C)/2;
   quadrado = pow(B, 2);
   retangulo = A*B;
   printf("TRIANGULO: %.3lf\n", triangulo);
   printf("CIRCULO: %.3lf\n", circulo);
   printf("TRAPEZIO: %.3lf\n", trapezio);
   printf("QUADRADO: %.3lf\n", quadrado);
   printf("RETANGULO: %.3lf", retangulo);
}

int main(){
    area();
return 0;
}
