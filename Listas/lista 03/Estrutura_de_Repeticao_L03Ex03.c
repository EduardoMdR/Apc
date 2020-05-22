#include <stdio.h>
int main(){

    int media = 0,numero = 0;
    int i;
    scanf("%d", &numero);
    for (i = 0; i <= numero; i++){
        media += i;
    }
    printf("%.d\n", media);
return 0;
}
