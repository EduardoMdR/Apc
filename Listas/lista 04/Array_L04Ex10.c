#include <stdio.h>
int main(){

    int numeros[28], i, j;
    double media = 0, dp = 0;
    for(i = 0; i < 28; i++){
        scanf("%d", &numeros[i]);
        media += numeros[i];
    }
    media /= 28;
    //printf("%.1lf ", media);
    for(i = 0; i < 28; i++){
        dp += (pow(numeros[i]-media,2));
    }
    dp /= 28;
    printf("%.1lf\n%.1lf \n", dp, pow(dp,0.5));

return 0;
}
