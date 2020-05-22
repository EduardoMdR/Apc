#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    scanf("%d", &a);
    if ( a % 3 == 0)
            if ( a % 7 == 0)
        printf("MULTIPLO\n");
            else
        printf("NAO E MULTIPLO\n");
    else
        printf("NAO E MULTIPLO\n");

return 0;
}
