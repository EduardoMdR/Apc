#include <stdio.h>
int main(){

    int media = 0,qtdHoras = 0;
    int i;
    for (i = 0; i < 30; ++i){

        scanf("%d", &qtdHoras);
        media += qtdHoras;
    }
    printf("%.d\n", media);
return 0;
}
