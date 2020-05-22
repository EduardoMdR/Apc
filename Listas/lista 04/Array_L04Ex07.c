#include <stdio.h>
int main(){

    int numero[135], limiteInf, limiteSup, j, i, k = 0;
    double  soma = 0;
    for(i = 0; i < 135; i++){
        scanf("%d", &numero[i]);
    }
    scanf("%d %d", &limiteInf, &limiteSup);

    for(j = 0; j < i; j++){
        if ((limiteInf > numero[j]) || (limiteSup < numero[j])){
            printf("%d ", numero[j]);
        }
    }
return 0;
}
