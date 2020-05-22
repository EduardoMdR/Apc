#include <stdio.h>

int main(){
    int lesmas, velocidade, tipo = 0, tipoAgora, i;
    scanf("%d", &lesmas);
    if ((lesmas >= 1) || (lesmas <= 500)){
    for (i = 0; i < lesmas; i++){
        scanf("%d", &velocidade);
        if ((velocidade >=1 ) && (velocidade >= 20)){
            tipoAgora = 3;
            if (tipoAgora > tipo)
                tipo = tipoAgora;
            else
                tipo = tipo;
        }else
        if ((velocidade >= 10) && (velocidade < 20)){
            tipoAgora = 2;
            if (tipoAgora > tipo)
                tipo = tipoAgora;
            else
                tipo = tipo;
        }else
        if ((velocidade >= 20) && (lesmas <= 50)){
            tipoAgora = 3;
            if (tipoAgora > tipo)
                tipo = tipoAgora;
            else
                tipo = tipo;
        }
    }
    printf("%d\n", tipo);
    }else
return 0;
}
