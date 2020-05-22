#include <stdio.h>
int main(){

    int media = 1,numero = 0;
    int i;
    scanf("%d", &numero);
    if (numero < 0)
        printf("nao existe");
    else{
    for (i = 1; i <= numero; i++){
        media *= i;
    }
    printf("%.d\n", media);
    }
return 0;
}
