#include <stdio.h>

int main(){
  int raio;
  double pi = 3.14159;
  double volume;
  
  scanf("%d", &raio);
  
  volume = (4.0/3) * pi * raio * (raio * raio);
  printf("VOLUME = %.3lf\n", volume);
  
    return 0;
}