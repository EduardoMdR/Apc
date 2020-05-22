#include <stdio.h>

int main(){

    int k = 0;
    char leitura[100]={0}, letra={1};
    while(letra != '\n') {
        scanf("%c", &letra);
        leitura[k] = letra;
        k++;
        if(k == 100){
            break;
        }
    }
    k-=2;
    for(; k >= 0; k--){
        printf("%c", leitura[k]);
    }
return 0;
}
