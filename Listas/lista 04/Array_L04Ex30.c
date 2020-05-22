#include <stdio.h>

int main(){
    int matriz[7][7]={0}, soma[5]={0}, total = 0, i, j;
    for(i = 0; i < 7; i++){
        for(j = 0; j < 7; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 7; i++){
        soma[0] = matriz[3][i];
        soma[0] = matriz[i][3];
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            soma[1] = matriz[i][j];
            soma[2] = matriz[i][j+3];
            soma[3] = matriz[i+3][j];
            soma[4] = matriz[i+3][j+3];
        }
    }
    /*
    printf("soma 0 %d \n", soma[0]);
    printf("soma 1 %d \n", soma[1]);
    printf("soma 2 %d \n", soma[2]);
    printf("soma 3 %d \n", soma[3]);
    printf("soma 4 %d \n", soma[4]);*/


    if(soma[0] < soma[1])
        total = soma[1];
    if(soma[0] < soma[2])
        total = soma[2];
    if(soma[0] < soma[3])
        total = soma[3];
    if(soma[0] < soma[4])
        total = soma[4];

    printf("%d", total);
return 0;
}




