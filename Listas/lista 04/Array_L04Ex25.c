#include <stdio.h>
int main(){
    int matriz[9][9], verdade = 0, i, j;

    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            if (matriz[i][j] == matriz[j][i])
                verdade +=1;
        }
    }
    if (verdade == 81)
        printf("S");
    else
        printf("N");

return 0;
}


