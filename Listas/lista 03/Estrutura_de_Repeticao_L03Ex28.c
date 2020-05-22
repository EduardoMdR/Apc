#include <stdio.h>

int main(){

    double resistencias, serie = 0, paralelo = 0, diferenca, i;
    double maior = 0, menos = 9999999999, media = 0;
    for(i = 0; i < 6; i++){
        scanf("%lf", &resistencias);
        if (resistencias > maior){
            maior = resistencias;
        }
        serie += resistencias;
    }
    paralelo = (1 / serie);
    media = (serie / 6);
    diferenca = maior - media;
    printf("%.4lf %.4lf %.4lf", serie, paralelo, diferenca);

return 0;
}
