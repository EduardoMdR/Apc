#include <stdio.h>
int main(){
    int matriz[7][7]={0}, soma = 0, i, j;

    for(i = 0; i < 7; i++){
        for(j = 0; j < 7; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 7; i++){
        for(j = 0; j < 1; j++){
            soma += matriz[i][i];
        }
    }
    printf("%d", soma);

return 0;
}
