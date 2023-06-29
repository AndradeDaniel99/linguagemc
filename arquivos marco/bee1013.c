#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (){

int a, b, c;

scanf("%i\n", &a);
scanf("%i\n", &b);
scanf("%i\n", &c);

int maior = (((a + b) + abs(a - b))/2);
int MAIOR = (((maior + c) + abs(maior - c))/2);

printf ("%i eh o maior\n", MAIOR);

return 0;
}