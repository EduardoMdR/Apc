#include <stdio.h>
int main(){

    int numero[106], limite, soma = 0, j, i = 0;
    do{
        scanf("%d", &numero[i]);
        if (numero[i] == 0){
            break;}
        i += 1;
    }while(i < 106);
    scanf("%d", &limite);
    j = i;
    for(i = 0; i < j; i++){
        if (limite >= numero[i])
            soma += numero[i];
    }
    printf("%d", soma);
return 0;
}
