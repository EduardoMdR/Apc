#include <stdio.h>

int main() {

    int numero, auxiliar, inverso=0, algarismo;
    scanf("%d", &numero);
    if (numero > 0){
    while (numero > 0) {
        algarismo = numero % 10;
        inverso = 10*inverso + algarismo;
        numero = (int) numero/10;
    }
    printf("%d\n", inverso);}
    else{
    while (numero < 0) {
        algarismo = numero % 10;

        inverso = 10*inverso - algarismo;

        numero = - (int) numero/10;

        inverso -= inverso + inverso;
    }
    printf("%d%d\n", inverso, numero);
    }
return 0;
}
