#include <stdio.h>
int main()
{
    int a = 0;
    scanf("%d", &a);
    if (a >= 18 && a < 65)
        printf("OBRIGATORIO\n");
    else if (a >= 16 && a < 18 || a >= 65)
        printf("FACULTATIVO\n");
    else
        printf("NAO ELEITOR\n");

return 0;
}
