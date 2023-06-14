#include <stdio.h>

int main(){
    // inteiro
    int numero = 1;
    int inteiro;

    //inteiro longo
    long int cpf = 10391203192301;

    // inteiro mais longo ainda
    long long int massa_do_sol = 920139103912031920319230;

    // ponto flutuante == numero decimal ate 6 casas decimais de precisao
    float pi = 3.141509;

    // ponto flutuante == numero decimal ate 12 casas decimais de precisao
    double nome_da_variavel = 0.000000000001;

    // caractere
    char computador = 'm';

    printf("Hello");
    
    return 0;
    
    }
#include <math.h> //importa a biblioteca math

int main(){
    // voce pode declarar varias variaveis do mesmo tipo em uma linha
    double a = 121.0, b = 0.5;
    double potencia, raiz;

    printf("%.2f \n", a + b);
    printf("%.2f \n", a - b);
    printf("%.2f \n", a * b);
    printf("%.2f \n", a / b);

    //potenciacao VEM DA MATH.H
    potencia = pow(49, b);
    printf("potencia: %.1lf \n", potencia);

    //radiciacao VEM DA MATH.H
    raiz = sqrt(a);
    printf("raiz: %.1lf \n", raiz);

    return 0;