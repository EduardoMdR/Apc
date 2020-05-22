#include <stdio.h>
int main(){

    int decimal, hexadecimal[99]={0}, i = 0, j;
    scanf("%d", &decimal);
    do{
        hexadecimal[i] = decimal % 16;
        decimal /= 16;
        i += 1;
    }while(decimal != 0);
    i -=1;
    for(; i >= 0; i--){
        if ((hexadecimal[i] > 9) && (hexadecimal[i] < 16)){
            switch(hexadecimal[i]){
                    case 10:
                        printf("A");
                    break;
                    case 11:
                        printf("B");
                    break;
                    case 12:
                        printf("C");
                    break;
                    case 13:
                        printf("D");
                    break;
                    case 14:
                        printf("E");
                    break;
                    case 15:
                        printf("F");
                    break;
            }
        }else
        printf("%d", hexadecimal[i]);
    }
return 0;
}

