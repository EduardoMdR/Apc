#include <stdio.h>
int main(){

    int numero;

    do {
        scanf("%d", &numero);
        if (numero > 0){
        if (numero % 2 ==0)
        printf("%d: par\n", numero);
        else
        printf("%d: impar\n", numero);
        }}
    while ( numero > 0);


return 0;
}
