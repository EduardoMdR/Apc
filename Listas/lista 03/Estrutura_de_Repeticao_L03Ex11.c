#include <stdio.h>
int main(){

    int menor = 999999999999999999, maior = 0, n, numero;
    int i;
    scanf("%d", &n);
    scanf("%d", &numero);
    n -=1;
    menor = numero;
    maior = numero;
    for (i = 0; i < n; i++){
        scanf("%d", &numero);
        if (numero < menor){
            menor = numero;}
        if (numero > maior){
            maior = numero;}
    }

    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);
return 0;
}


