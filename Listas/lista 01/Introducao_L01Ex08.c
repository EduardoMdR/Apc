#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a = 0, z = 2, y = 3;
    double b = 0;
    scanf("%d", &a);
    b = a;
    printf("%.1lf\n", b * b);
    printf("%.1lf\n", b * b * b);
    printf("%.1lf\n", pow(b, 1.0/2.0));
    printf("%.1lf\n", pow(b, 1.0/3.0));
    return 0;
}
