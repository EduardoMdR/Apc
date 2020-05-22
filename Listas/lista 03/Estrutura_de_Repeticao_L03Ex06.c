#include <stdio.h>
int main(){

    int numero, total = 0;
    float media;
    int i = 0;

    do{
        scanf("%d", &numero);
    if (numero >= 0){
        total += numero;
        i += 1;}
    }while( numero >= 0);
    media = total;
    media /= i;
    printf("%d\n", total);
    if (media >= 0)
    printf("%.1f\n", media);
    else
        printf("0");
return 0;
}
