#include <stdio.h>

int main(){


int valor;
scanf ("%i", &valor);

    int quociente100 = valor / 100;
    int restode100 = valor %100;


    int quociente50 = restode100 / 50;
    int restode50 = restode100 %50;


    int quociente20 = restode50 / 20;
    int restode20 = restode50 %20;


    int quociente10 = restode20 / 10;
    int restode10 = restode20 %10;


    int quociente5 = restode10 / 5;
    int restode5 = restode10 %5;


    int quociente2 = restode5 / 2;
    int restode2 = restode5 %2;


    int quociente1 = restode2 / 1;
    int restode1 = restode2 %1;


printf("%i nota (s) de R$ 100,00\n%i nota (s) de R$ 50,00\n%i nota (s) de R$ 20,00\n%i nota (s) de R$ 10,00\n%i nota (s) de R$ 5,00\n%i nota (s) de R$ 2,00\n%i nota (s) de R$ 1,00\n", quociente100, quociente50, quociente20, quociente10, quociente5, quociente2, quociente1);

return 0;
}