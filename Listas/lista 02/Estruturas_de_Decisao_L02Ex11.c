#include <stdio.h>
int main()
{
    double valor = 0.0;
    scanf("%lf", &valor);
    if ( valor <= 1)
        printf("%.1lf", valor);
        else
            if (valor > 1 && valor <= 2)
            printf("%.1lf", valor * 2);
            else
                if (valor > 2 && valor <=3)
                printf("%.1lf", valor * valor);
                else
                    if (valor > 3);
                    printf("%.1lf", valor * valor * valor);
return 0;
}
