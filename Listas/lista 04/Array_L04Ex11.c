#include<stdio.h>

int main(){
    int numeros[500], i, j, k, verdade = 0;
    for(i= 0; i < 500; i++){
        scanf("%d", &numeros[i]);
    }
    for(i = 0 ; i < 500; i++){
        verdade = 1;
        for(j = (i-1); j  >= 0; j--){
          if(numeros[j] == numeros[i]){
            verdade = 0;
            break;
          }
        }
        if(verdade){
        printf("%d ", numeros[i]);
        }
    }
    return 0;
}
