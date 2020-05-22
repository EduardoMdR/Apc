#include <stdio.h>
int main(){

    int menor, maior;
    double media = 1;
    int i = 0;
    scanf("%d %d", &menor, &maior);

    for (i = 0; menor <= maior; i++){
        media = menor;
        media -= 32;
        media *= 0.55555555555;
        printf("%d F : %.1lf C\n", menor, media);
        menor += 1;
    }
return 0;
}
