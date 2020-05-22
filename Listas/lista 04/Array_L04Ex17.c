#include <stdio.h>
int main(){
    int matriz[8][8]={0}, soma[8]={0}, somaD = 0, n, i, j, maior[8]={0};
    int total = 0;
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            scanf("%d", &matriz[i][j]);
            if ( j == i )
                somaD += matriz[i][j];
        }
    }
    //printf("%d \n", somaD);
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            soma[i] += matriz[i][j];
        }
        maior[i] = soma[i] %10;
        //printf("%d %d \n", i, maior[i]);
    }

    total = maior[0];
    n = 0;
    for(j = 0; j < 8; j++){
        if (maior[j] > total){
            total = maior[j];
            n = j;
        }
    }
    printf("%d \n", n-4);

return 0;
}
