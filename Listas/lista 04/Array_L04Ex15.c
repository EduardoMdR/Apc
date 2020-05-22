#include <stdio.h>

int main(){

    int k = 0, vet1 = 0, vet2 = 0;
    char leitura[100]={0}, leitura2[100]={0}, letra={0};
    while(letra != '\n') {
        scanf("%c", &letra);
        leitura[vet1] = letra;
        vet1++;
        if(k == 80){
            break;
        }
    }
    letra=0;
     while(letra != '\n') {
        scanf("%c", &letra);
        leitura2[vet2] = letra;
        vet2++;
        if(k == 80){
            break;
        }
    }
    for(k = 0; k < 100; k++){
        printf("%c%c", leitura[k], leitura2[k]);
    }
return 0;
}
