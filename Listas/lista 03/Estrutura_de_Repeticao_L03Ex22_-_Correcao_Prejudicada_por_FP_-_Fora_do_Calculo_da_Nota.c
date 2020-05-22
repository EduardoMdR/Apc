#include <stdio.h>

int main(){
    int codigo[10], codmenor, codmaior, i;//codigo do vndedor
    double vendas[10], maior = 0, menor = 9999999999999999;

    for (i = 0; i < 10; i++){
        scanf("%d", &codigo[i]);
        scanf("%lf", &vendas[i]);
        if (vendas[i] < 5000)
            vendas[i] *= 0.015;
        else
            if ((vendas[i] > 5000) && (vendas[i] < 15000))
            vendas[i] *= 0.035;
        else//vendas a partir de 15000
            vendas[i] *= 0.047;
            //printf("%lf", vendas[i]);
        if (vendas[i] > maior){
            maior = 0;
            codmaior = 0;
            maior = vendas[i];
            codmaior = codigo[i];
            //printf("%lf\n", vendas[i]);
        }
        if (vendas[i] < menor){
            menor = 0;
            codmenor = 0;
            menor = vendas[i];
            codmenor = codigo[i];
            //printf("%lf\n", vendas[i]);
        }
    }
    printf("%d %.2lf %d %.2lf\n", codmaior, maior, codmenor, menor);
return 0;
}
