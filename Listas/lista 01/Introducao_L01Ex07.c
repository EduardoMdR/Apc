#include <stdio.h>
int main()
{
    double a = 0, b = 0, e = 0;
    scanf("%lf %lf", &a, &b);
    e = 3.1416 * (b*b) * a;
    printf("%.1lf\n", e);
    return 0;
}
