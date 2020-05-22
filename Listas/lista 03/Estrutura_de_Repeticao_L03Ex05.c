#include <stdio.h>
int main(){

    double deposito, juros, media = 0;
    int tempo;
    int i;
    scanf("%lf %lf %d", &deposito, &juros, &tempo);
    juros *= 0.01;
    for (i = 0; i < tempo; i++){
        media = deposito * juros;
        //printf("media %.2lf\n", media);
        deposito += media;
        //printf("deposito %.2lf\n", deposito);
        printf("Rendimento no mes %d: %.2lf\n", i, media);
    }
    printf("Saldo final do investimento: %.2lf\n", deposito);

return 0;
}
