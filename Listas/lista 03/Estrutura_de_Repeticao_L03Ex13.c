#include <stdio.h>
int main(){

    int numero, i, soma;
    scanf("%d", &numero);
    for (i = 1; i <= 10; i++){
        soma = (numero * i);
        printf("%dx%d=%d\n", numero, i, soma);
    }


return 0;
}
