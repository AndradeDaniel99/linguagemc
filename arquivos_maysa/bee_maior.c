#include<stdio.h>
#include<math.h>

void maior(){
   int A, B, C, maior;
   scanf("%d %d %d", &A, &B, &C);

   if (A>B && A>C){
      maior = A;
   } else if (B>A && B>C){
      maior = B;
   } else if (C>A && C>B){
      maior = C;
   } else {
      printf("vc digitou tres numeros iguais\n");
   }
   printf("%d eh o maior\n", maior);
}

// void maior(){
//     int A, B, C, maior;
//     scanf("%d %d %d", &A, &B, &C);
//     maior=(A+B+abs(A-B))/2;
//     maior=(maior+C+abs(maior-C))/2;
//     printf("%d eh o maior\n", maior);
// }

int main(){
   int numero;
   printf("%d", numero);
   //  maior();
    return 0;
}
