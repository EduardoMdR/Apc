#include <stdio.h>
int main(){

    int altura1, i, altura2;
    scanf("%d %d", &altura1, &altura2);
    for (i = 1; altura1 > altura2; altura1 +=2, altura2 +=3, i++){
        //printf("%d\n", i);
    }
    i -=1;
    printf("%d\n", i);
return 0;
}
