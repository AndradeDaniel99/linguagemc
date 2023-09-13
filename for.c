#include <stdio.h>

int main(){
    int i, conjunto[10];
    for(i = 0; i < 10; i++){
        if (i % 2 == 0){
            conjunto[i] = i + 10;
            
        }
        printf("%d\n", conjunto[i]);
    }

    
    return 0;
}
