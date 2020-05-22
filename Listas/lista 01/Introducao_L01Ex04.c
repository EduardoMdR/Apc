#include <stdio.h>
int main()
{
    double a = 0 ,b = 0 ,c = 0;
    scanf("%lf %lf", &a, &b);
    c = a * (b * 0.01);
    printf("%.2lf\n", c);
    printf("%.2lf\n", c + a);

return 0;
}
