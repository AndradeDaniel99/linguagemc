#include<stdio.h>

int main (){
int i, conjunto [11];
    for(i = 0;i < 11; i++){
        if (i % 2 ==0){ 
            conjunto[i] = i + 10;
            printf("%i\n", conjunto[i]);
        }
      printf("Sem valor!\n");
    }


    return 0;
}