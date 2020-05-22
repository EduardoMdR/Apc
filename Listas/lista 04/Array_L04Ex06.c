#include <stdio.h>
int main(){

    int numero[106], limite, j, i, k = 0;
    double  soma = 0;
    i=-1;
    for(i = 0; i < 53; i++){
        scanf("%d", &numero[i]);
    }
    scanf("%d", &limite);
    j = i;
    for(i = 0; i < j; i++){
        if (limite >= numero[i]){
            soma += numero[i];
            k +=1;
        }
    }
    printf("%.1lf", soma/k);
return 0;
}
