#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int a, b;

    // scanf("%d\n%d", &a, &b); // \n é quebra de linha

    //se b > a, imprimir que b é maior que a
    //senao, imprimir que b é menor que a

    bool check; // 1:verdadeiro ou 0:falso

// operadores de comparacao que o if aceita: 
// maior que >, 
// maior ou igual a >=,
// menor que <,
// menor ou igual a <=,
// igual a ==,
// diferente de !=

    // checar se qualquer numero é par
    // if (a == 0){
    //     printf("eh par\n");
    // } else if (a == 2){
    //     printf("eh par\n");
    // } else if(a == 4){
    //     printf("eh par\n");
    // } else if(a == 6){
    //     printf("eh par\n");
    // } else if(a ==8){
    //     printf("eh par\n");
    // }
    
    

    // if(a >= b){
    //     printf("a eh maior ou igual a b\n");
    // }

    // if(a < b){
    //     printf("a eh menor que b\n");
    // }
    // // a = 10, b = 20
    // if(a <= b){
    //     printf("a eh menor ou igual a b\n");
    // }

    // if(a == b){
    //     printf("a eh igual a b\n");
    // }

    // if(a != b){
    //     printf("a eh diferente de b\n");
    // }

    //a = 10, b = 20
    // if(a < b){
    //     printf("a eh menor ou igual a b\n");
    // } else if(a != b){
    //     printf("a eh diferente de b\n");
    // } else {
    //     printf("os dois sao iguais\n");
    // }



    // a = 20, b = 11
    //OPERADORES LOGICOS (valores V ou F)
    // && : E
    // || : OU
    // check = ((a > b) && (a == 2*b)); //falso
    // check = ((a > b) || (a == 2*b)); //veradeiro

    // (V || V) = verdadeiro
    // (V || F) = verdadeiro
    // (F || V) = verdadeiro
    // (F || F) = falso

    // (V && V) = verdadeiro
    // (V && F) = falso
    // (F && V) = falso
    // (F && F) = falso 


















    double altura, peso, imc;

    scanf("%lf", &peso);
    scanf("%lf", &altura);

    imc = (peso / (altura * altura));

    printf("IMC = %.2lf\n", imc);
    if(imc < 18.5){
        printf("Abaixo do peso normal\n");
    } else if((imc >=18.5) && (imc <= 24.9)){
        printf("peso normal\n");
    } else if((imc >= 25.0) && (imc <= 29.9)){
        printf("excesso de peso\n");
    } else if ((imc >= 30.0) && (imc <= 34.9)){
        printf("Obesidade classe 1\n");
    } else if ((imc >= 35.0) && (imc <=39.9)){
        printf("Obesidade classe 2 - rasputia\n");
    } else {
        printf("Obesidade classe 3 - BALEIA!\n");
    }




    return 0;
}
