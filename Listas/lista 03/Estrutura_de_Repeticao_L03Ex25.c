#include <stdio.h>
#include <math.h>

int main() {

    int i, numero, primo = 1;
    scanf("%d", &numero);
    for (i = 2; primo && (i <= sqrt(numero)); i++)
    if ((numero % i) == 0)
        primo = 0;
    if (primo)
        printf("SIM\n");
    else
        printf("NAO\n");
    return 0;
}
