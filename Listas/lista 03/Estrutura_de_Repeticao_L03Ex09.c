#include <stdio.h>
int main(){

    int quantidade;
    double preco, total;

    do {
        scanf("%d", &quantidade);
        if (quantidade > 0){
        scanf("%lf", &preco);
            if (preco < 1)
            do{
                scanf("%lf", &preco);
            }while (preco < 1 );
        total += (quantidade * preco);
        }else{}
    }
    while ( quantidade > 0);
    printf("%.2lf", total);


return 0;
}
