#include <stdio.h>
 
int main() {
 
int codigo, quantidade;
scanf ("%i %i", &codigo, &quantidade);
double valor;

switch (codigo)
{
case 1: 
valor = (quantidade * 4);
printf ("Total: R$ %.2lf\n", valor);
    break;

case 2:
valor = (quantidade * 4.5);
printf ("Total: R$ %.2lf\n", valor);
    break;

case 3: 
valor = (quantidade * 5);
printf ("Total: R$ %.2lf\n", valor);
    break;

case 4: 
valor = (quantidade * 2);
printf ("Total: R$ %.2lf\n", valor);
    break;

case 5: 
valor = (quantidade * 1.5);
printf ("Total: R$ %.2lf\n", valor);
    break;

default:
printf("código não existente\n");
    break;
}
    return 0;
}