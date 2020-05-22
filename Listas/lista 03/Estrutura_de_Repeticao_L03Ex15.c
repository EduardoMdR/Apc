#include <stdio.h>
int main(){

    int largura, comprimento, area = 0, n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++){
        scanf("%d %d", &largura, &comprimento);
        area += (largura*comprimento);
    }

    printf("%d\n", area);
return 0;
}
