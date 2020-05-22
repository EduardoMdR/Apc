#include <stdio.h>
int main(){
    int matrizA[4][5]={0}, matrizB[4][5]={0}, i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &matrizA[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &matrizB[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            printf("%d ", matrizA[i][j] + matrizB[i][j]);
        }
        printf("\n");
    }

return 0;
}

