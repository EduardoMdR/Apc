#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *      arq;
    int numero, i;
    scanf("%d", &numero);
    int x[numero], y[numero];
    arq = fopen("pontos.dat", "w");
    for(i = 0; i < numero; i++){
        scanf("%d %d", &x[i], &y[i]);
        fprintf(arq, "%d ", i+1);
        fprintf(arq, "%d ", x[i]);
        fprintf(arq, "%d\n", y[i]);
    }
    fclose(arq);
  return 0;
}