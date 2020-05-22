#include <stdio.h>
#include<math.h>
#define D 4

int main(){
    double media[D]={0}, aux;
    int k, nTrain, nTeste, i, j, h;

    scanf("%d", &k);
    scanf("%d", &nTrain);
    scanf("%d", &nTeste);

    double xTrain[nTrain][D], xTeste[nTeste][D], dp[4]={0};
    double yTrain[nTrain];

    for(i = 0; i < nTrain; i++){
        for(j = 0; j < D; j++){     ///passo 4
            scanf("%lf", &xTrain[i][j]);
            media[i] += xTrain[i][j];
        }
        media[i] /= D;
        //printf("media %.1lf \n", media[i]);
        for(j = 0; j < D; j++){
            dp[i] += pow((xTrain[i][j]-media[i]),2);
        }
        j = 0;
        dp[i] /=4;
        dp[i] = pow(dp[i],0.5);
        //printf("%.3lf \n", dp[i]);
    }
    for(i = 0; i < nTrain; i++){
        for(j = 0; j < D; j++){
            xTrain[i][j] -= media[i];
            xTrain[i][j] /= dp[i];
        }
    }
    for(i = 0; i < nTrain; i++){        ///passo 5
        scanf("%d", &yTrain[i]);
    }

    for(i = 0; i < nTeste; i++){        ///passo 6
        for(j = 0; j < D; j++){
            scanf("%lf", &xTeste[i][j]);
            media[i] += xTeste[i][j];
        }
        for(i = 0; i < nTeste; i++){
            for(j = 0; j < D; j++){
                xTeste[i][j] -= media[i];
                xTeste[i][j] /= dp[i];
            }
        }
    }
    double vetorW[nTrain]={0}
    for(i = 0; i < nTrain; i++){
        vetorW[i] =
    }

return 0;
}
