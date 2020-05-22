#include <stdio.h>
int main(){

    int numero[150], limite, j, i;
    i=-1;
    do{
        i +=1;
        scanf("%d", &numero[i]);
    }while(i < 149);

    scanf("%d", &limite);

    for(i = 0; i < 150; i++){
        if (limite > numero[i])
        printf("%d ", numero[i]);
    }
    //printf("\n");
return 0;
}
