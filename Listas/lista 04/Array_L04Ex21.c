#include <stdio.h>
int main(){
    int matriz[4][5]={0}, maior, n, m, i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    maior = matriz[0][0];
    n = 0;
    m = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            if (maior < matriz[i][j]){
                maior = matriz[i][j];
                n = i;
                m = j;
            }
        }
    }
    printf("%d %d %d", maior, n, m);

return 0;
}

