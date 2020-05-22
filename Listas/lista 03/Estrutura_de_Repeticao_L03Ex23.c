#include <stdio.h>

int main(){
    int i;
    double comprar[6], vender[6], total, porcentagem, totaltotal =0;
    int lucro = 0, prejuizo = 0;

    for (i = 0; i < 6; i++){
        scanf("%lf %lf", &comprar[i], &vender[i]);
        total = vender[i] - comprar[i];
        totaltotal += total;
        if (total < 0){ //prejuizo
            prejuizo +=1;
        }
        if (total > 0){ //lucro
            lucro +=1;
        }
    }
    totaltotal /=500;
    printf("%.2lf %d %d\n", totaltotal, lucro, prejuizo);
return 0;
}
