#include <stdio.h>
 
int main() {
 
double n1, n2, n3, n4;
double media1, media2;
scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

media1 = (((n1 * 2)+(n2 * 3)+(n3 * 4)+(n4 * 1))/ 10);

if (media1 >= 7){
    printf("Media: %.1lf\nAluno aprovado.\n", media1);
}else if(media1 < 5){
    printf("Media: %.1lf\nAluno reprovado.\n", media1);
}else if((media1 >=5 )&&(media1<7)){
    double exame;
    scanf("%lf", &exame);
    media2 = ((exame + media1)/2);
    printf("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\nAluno aprovado.\nMedia final: %.1lf\n", media1, exame, media2);
}else{
    return 0;
}
    return 0;
}