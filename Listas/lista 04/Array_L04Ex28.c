#include <stdio.h> //nao esta funcionando
int main(){

    int numeros[10][10], j, k = 0, i, aux = 0;

    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            scanf("%d", &numeros[i][j]);
        }
    }

        for(j = 0; j < 10; j++){//j nao muda
            aux = numeros[8-k][j];
            numeros[8-k][j] = numeros[0+k][j];
            numeros[0+k][j] = aux;
            k++;
        }

    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }

return 0;
}
