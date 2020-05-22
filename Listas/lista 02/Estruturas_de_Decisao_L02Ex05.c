#include <stdio.h>
int main()
{
    int a = 0, b = 0;
    double c = 0.0;
    scanf("%d %d", &a, &b);
    c = (a + b)/2;
    if (c >= 7)
        printf("APROVADO\n");
    else if (c <= 3)
        printf("REPROVADO\n");
    else
        printf("EXAME\n");

return 0;
}
