#include <stdio.h>
int main()
{
    double salario;
    scanf("%lf", &salario);
    if ( salario <= 500)
        printf("%.2lf\n", salario * 0);
    else
        if (salario > 500 && salario <= 1000)
        printf("%.2lf\n", salario * 0.3);
        else
            if (salario > 1000 && salario <= 3000)
            printf("%.2lf", salario * 0.4);
            else
                if (salario > 3000)
                printf("%.2lf", salario * 0.5);
return 0;
}
