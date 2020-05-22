#include <stdio.h>
int main(){

    double media,peso;
    int i;
    for (i = 0; i < 25; ++i){

        scanf("%lf", &peso);
        media += peso;
    }
    printf("%.1lf\n", media);
return 0;
}
