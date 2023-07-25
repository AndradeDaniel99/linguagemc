#include <stdio.h>
 
int main() {
 
int entrada;
int horas, minutos, segundos;
scanf("%i", &entrada);
    horas = entrada / 3600;
    minutos = (entrada % 3600) / 60;
    segundos = entrada % 60;
    
    


printf("%i:%i:%i\n", horas, minutos, segundos);
   
    return 0;
}