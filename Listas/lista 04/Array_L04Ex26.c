#include <stdio.h>
int main(){
    int matriz[10][5], soma[10]={0}, maior = 0,n = 0, i, j;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
            soma[i] += matriz[i][j];
        }
    }
    maior = soma[0];
    for(i = 1; i < 10; i++){
        if (soma[i] > maior){
            maior = soma[i];
            n = i;
        }
    }
    printf("%d", n);
return 0;
}

