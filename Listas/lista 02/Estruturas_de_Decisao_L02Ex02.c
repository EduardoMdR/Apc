#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    if ( a % b == 0)
        printf("MULTIPLO\n");
    else if ( b % a == 0)
        printf("MULTIPLO\n");
    else
        printf("NAO E MULTIPLO\n");
return 0;
}
