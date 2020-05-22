#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    double e = 0;
    scanf("%d %d %d", &a, &b, &c);
    e = (a+b+c)/3.0;
    printf("%.1lf\n", e);
    return 0;
}
