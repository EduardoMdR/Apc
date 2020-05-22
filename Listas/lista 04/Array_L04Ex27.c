#include <stdio.h>
int main(){

    int matriz[15][5], menor, i, j;

    for(i = 0; i < 15; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 15; i++){
        menor = 9999;
        for(j = 0; j < 5; j++){
            if (matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
        for(j = 0; j < 5; j++){
            matriz[i][j] -= menor;
        }
    }

    for(i = 0; i < 15; i++){
        for(j = 0; j < 5; j++){
            printf("%02d ", matriz[i][j]);
        }
        printf("\n");
    }
return 0;
}
