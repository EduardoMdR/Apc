#include <stdio.h>
int main(){
    int matriz[100][100]={0}, nova[9][7]={0}, aux = 0, i, j;

    for(i = 0; i < 7; i++){
        for(j = 0; j < 9; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 9; i++){
        for(j = 0; j < 7; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
return 0;
}
