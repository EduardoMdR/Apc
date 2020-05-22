#include <stdio.h>
int main(){

    int numero[87], limite, j, i;
    i=-1;
    do{
        i +=1;
        scanf("%d", &numero[i]);
        if (numero[i] == 0)
            break;
    }while(i < 87);
    scanf("%d", &limite);
    j = i;
    for(i = 0; i < j; i++){
        if (limite < numero[i])
        printf("%d ", numero[i]);
    }
    //printf("\n");
return 0;
}
