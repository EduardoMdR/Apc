#include <stdio.h>

int main(){

    int menor = 999999999999999999, maior = 0, n, numero;
    int i;

    scanf("%d", &numero);
    menor = numero;
    maior = numero;
    for (i = 0; i < 19; i++){
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
