#include <stdio.h>
int main(){

    int numeros[10][10], soma = 0, j, k, i;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            scanf("%d", &numeros[i][j]);
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j <= i; j++){
            soma += numeros[i][j];
        }
    }
    printf("%d", soma);

return 0;
}
