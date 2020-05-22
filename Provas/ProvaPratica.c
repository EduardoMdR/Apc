#include <stdio.h>

int main(){
    int valores = 0, algarismo, algarismo1, qtd0=0, qtd1=0, qtd2=0, qtd3=0, qtd4=0, qtd5=0, qtd6=0, qtd7=0, qtd8=0, qtd9=0;
    do{
        scanf("%d", &valores);
        if ((valores < 9999) && (valores > 0)){
            //printf("%d\n", valores);
            algarismo = valores % 10;
            algarismo1 = ((valores % 100) - (valores % 10))/10;
                switch (algarismo){
                    case 0:
                        qtd0 += algarismo1;
                    break;
                    case 1:
                        qtd1 += algarismo1;
                    break;
                    case 2:
                        qtd2 += algarismo1;
                    break;
                    case 3:
                        qtd3 += algarismo1;
                    break;
                    case 4:
                        qtd4 += algarismo1;
                    break;
                    case 5:
                        qtd5 += algarismo1;
                    break;
                    case 6:
                        qtd6 += algarismo1;
                    break;
                    case 7:
                        qtd7 += algarismo1;
                    break;
                    case 8:
                        qtd8 += algarismo1;
                    break;
                    case 9:
                        qtd9 += algarismo1;
                    break;
                }
        }
    }while( valores > 0);
    //printf("%d %d\n", algarismo, algarismo1);
    printf("0 %d\n", qtd0);
    printf("1 %d\n", qtd1);
    printf("2 %d\n", qtd2);
    printf("3 %d\n", qtd3);
    printf("4 %d\n", qtd4);
    printf("5 %d\n", qtd5);
    printf("6 %d\n", qtd6);
    printf("7 %d\n", qtd7);
    printf("8 %d\n", qtd8);
    printf("9 %d\n", qtd9);

    return 0;
}
