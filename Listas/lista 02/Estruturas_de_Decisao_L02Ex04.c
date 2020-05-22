#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && b > c)
        printf("%d %d %d\n", c, b, a);
    else if ( a > c && c > b)
        printf("%d %d %d\n", b, c, a);
    else if ( b > a && a > c)
        printf("%d %d %d\n", c, a, b);
    else if ( b > c && c > a)
        printf("%d %d %d\n", a, c, b);
    else if ( c > a && a > b)
        printf("%d %d %d\n", b, a, c);
    else if ( c > b && b > a)
        printf("%d %d %d\n", a, b, c);
return 0;
}
