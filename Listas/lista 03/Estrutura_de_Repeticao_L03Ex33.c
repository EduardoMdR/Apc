#include <stdio.h>
int main(){
    int i, j;
    int valorCobrado, precoFinal,tc[99] = {0}, vl[99] = {0}, qtdCliente[99], ciclo, taxa[2]={0}, taxaTotal, valorLiquido, cliente[99][3][12]={0};
    scanf("%d", &valorCobrado);
    scanf("%d", &precoFinal);
    for (j = 0; j < 12; j++){
        scanf("%d", &qtdCliente[j]);
        for (i = 0; i < qtdCliente[j]; i++){
            scanf("%d", &ciclo);
            cliente[i][0][j] = ciclo * precoFinal;
            cliente[i][1][j] = ciclo * valorCobrado;
            cliente[i][2][j] = cliente[i][0][j] - cliente[i][1][j];
            taxa[0] += cliente[i][1][j];
            taxa[1] += cliente[i][2][j];
            tc[j] += cliente[i][1][j];
            vl[j] += cliente[i][2][j];
        }
    }
    for (j = 0; j <12; j++){
        for(i = 0 ; i < qtdCliente[j]; i++){
            printf("%d %d %d\n", cliente[i][0][j], cliente[i][1][j], cliente[i][2][j]);
        }
        printf("%d %d\n", tc[j], vl[j]);
    }
    printf("%d %d\n", taxa[0], taxa[1]);
return 0;
}
