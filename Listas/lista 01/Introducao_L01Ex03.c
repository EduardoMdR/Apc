#include <stdio.h>
int main()
{
    double a = 0, b=0;
    scanf("%lf", &a);
    b = a + a*0.25;
    printf("%.2lf\n", b);
    return 0;
}
