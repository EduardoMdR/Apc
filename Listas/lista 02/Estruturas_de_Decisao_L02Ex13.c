#include <stdio.h>
int main()
{
    int item1, item2;
    double total, a , b;
    scanf("%d %d", &item1, &item2);

    switch(item1){
        case 1:
            a = 5.00;
        break;
        case 2:
            a = 7.00;
        break;
        case 3:
            a = 7.50;
        break;
        case 4:
            a = 3.50;
        break;
        case 5:
            a = 3.00;
            break;
        }

        switch(item2){
        case 1:
            b = 5.00;
        break;
        case 2:
            b = 7.00;
        break;
        case 3:
            b = 7.50;
        break;
        case 4:
            b = 3.50;
        break;
        case 5:
            b = 3.00;
            break;
        }

    total = a + b;
    printf("Total: R$ %.2lf", total);
return 0;
}
