#include <stdio.h>
int main()
{
    double a = 0 ,b = 0 ,c = 0;
    float e = 0 , d = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    d = a * (b * 0.01)*(c * 0.01) ;
    e = a * (b * 0.01) - d;
    e = e + a;
    printf("%.2f\n", d);
    printf("%.2f\n", e);
return 0;
}
