#include <stdio.h>
#include <math.h>
#define cols 4
#define verbose 0

int main()
{
    // LER OS VALORES;
    int K, Ntrain, Nteste, i, j, k;
    scanf("%d", &K);
    scanf("%d", &Ntrain);
    scanf("%d", &Nteste);
    double train[Ntrain][cols], teste[Nteste][cols], indicestrain[Ntrain];
    for (i = 0; i < Ntrain; i++){
        scanf("%lf %lf %lf %lf", &train[i][0], &train[i][1], &train[i][2], &train[i][3]);
    }
    if (verbose){
        printf("matriz train\n");
        for (i = 0; i < Ntrain; i++){
            for (j = 0; j < cols; j++){
                printf("%.0lf ", train[i][j]);
            }
            printf("\n");
        }
    }
    for (i = 0; i < Ntrain; i++){
        scanf("%lf", &indicestrain[i]);
    }
    if (verbose){
        printf("vetor indices\n");
        for (i = 0; i < Ntrain; i++){
            printf("%.0lf ", indicestrain[i]);
        }
        printf("\n");
    }
    for (i = 0; i < Ntrain; i++){
        scanf("%lf %lf %lf %lf", &teste[i][0], &teste[i][1], &teste[i][2], &teste[i][3]);
    }
    if (verbose){
        printf("matriz teste\n");
        for (i = 0; i < Nteste; i++){
            for (j = 0; j < cols; j++){
                printf("%.0lf ", teste[i][j]);
            }
            printf("\n");
        }
    }
    double soma[cols], media[cols], desvio[cols];
    // para inicializar os vetores com zero;
    for (i = 0; i < cols; i++){
        media[i] = 0;
        soma[i] = 0;
        desvio[i] = 0;
    }
    if (verbose){
        printf("soma[i] zerado\n");
        for (i = 0; i < cols; i++){
            printf("%.1lf ", soma[i]);
        }
        printf("\n");
        printf("media[i] zerado\n");
        for (i = 0; i < cols; i++){
            printf("%.1lf ", media[i]);
        }
        printf("\n");
        printf("desvio[i] zerado\n");
        for (i = 0; i < cols; i++){
            printf("%.1lf ", desvio[i]);
        }
        printf("\n");
    }
    // calcular media;
    for (i = 0; i < cols; i++){
        for (j = 0; j < Ntrain; j++){
            soma[i] += train[j][i];
        }
        media[i] = soma[i]/Ntrain;
    }
    if (verbose){
        printf("media[i]\n");
        for (i = 0; i < cols; i++){
            printf("%.2lf ", media[i]);
        }
        printf("\n");
    }
    for (i = 0; i < cols; i++){
        soma[i] = 0;
    }
    double variancia = 0;
    // calcular desvio padrao;
    for (i = 0; i < cols; i++){
        variancia = 0;
        for (j = 0; j < Ntrain; j++){
            variancia += (train[j][i] - media[i])*(train[j][i] - media[i]);
        }
        variancia = variancia/Ntrain;
        desvio[i] = sqrt(variancia);
    }
    if (verbose){
        printf("desvio[i]\n");
        for (i = 0; i < cols; i++){
            printf("%lf ", desvio[i]);
        }
        printf("\n");
    }
    // NORMALIZAR OS VALORES;
    for (i = 0; i < Ntrain; i++){
        for (j = 0; j < cols; j++){
            train[i][j] = (train[i][j] - media[j])/desvio[j];
        }
    }
    for (i = 0; i < Nteste; i++){
        for (j = 0; j < cols; j++){
            teste[i][j] = (teste[i][j] - media[j])/desvio[j];
        }
    }
    if (verbose){
        printf("matriz teste normalizada\n");
        for (i = 0; i < Nteste; i++){
            for (j = 0; j < cols; j++){
                printf("%lf ", teste[i][j]);
            }
            printf("\n");
        }
    }
    double W[Nteste][Ntrain];
    int I[Nteste][Ntrain];
    // inicializando a matriz de indices;
    for (i = 0; i < Nteste; i++){
        for (j = 0; j < Ntrain; j++){
            I[i][j] = j;
        }
    }
    if (verbose){
        printf("matriz indices nao organizada\n");
        for (i = 0; i < Nteste; i++){
            for (j = 0; j < Ntrain; j++){
                printf("%d ", I[i][j]);
            }
            printf("\n");
        }
    }
    // inicializando a matriz W
    for (i = 0; i < Nteste; i++){
        for (j = 0; j < Ntrain; j++){
            W[i][j] = 0;
        }
    }
    if (verbose){
        printf("matriz W zerada\n");
        for (i = 0; i < Nteste; i++){
            for (j = 0; j < Ntrain; j++){
                printf("%.0lf ", W[i][j]);
            }
            printf("\n");
        }
    }
    // calcular DEuclidiana e botar na matriz W
    for (i = 0; i < Nteste; i++){
        for (j = 0; j < Ntrain; j++){
            for (k = 0; k < cols; k++){
                W[i][j] += (teste[i][k] - train[j][k])*(teste[i][k] - train[j][k]);
            }
            W[i][j] = sqrt(W[i][j]);
        }
    }
    if (verbose){
        printf("matriz W nao organizada\n");
	    for (i = 0; i < Nteste; i++){
            for (k = 0; k < Ntrain; k++){
                printf("%.4lf ", W[i][k]);
            }
            printf("\n");
        }
    }
    double aux = 0, aux2 = 0;
    // Insertion sort;
    for (k = 0; k < Nteste; k++){
        for (i = 1; i < Ntrain; i++){
            aux = W[k][i];
            aux2 = I[k][i];
            j = i -1;
            while ((j >= 0) && (W[k][j] >= aux)){
                W[k][j+1] = W[k][j];
                I[k][j+1] = I[k][j];
                j--;
            }
            W[k][j+1] = aux;
            I[k][j+1] = aux2;
        }
    }
    if (verbose){
        printf("matriz W organizada\n");
        for (k = 0; k < Nteste; k++){
            for (i = 0; i < Ntrain; i++){
                printf("%lf ", W[k][i]);
            }
            printf("\n");
        }
        printf("matriz I organizada\n");
        for (k = 0; k < Nteste; k++){
            for (i = 0; i < Ntrain; i++){
                printf("%d ", I[k][i]);
            }
            printf("\n");
        }
    }
    int sestosa = 0, versicolor = 0, virginia = 0;
    for (i = 0; i < Nteste; i++){
        sestosa = 0;
        versicolor = 0;
        virginia = 0;
        for (j = 0; j < K; j++){
            if (indicestrain[I[i][j]] == 0)
                sestosa++;
                else if (indicestrain[I[i][j]] == 1)
                    versicolor++;
                    else if (indicestrain[I[i][j]] == 2)
                        virginia++;
        }
        if (sestosa > versicolor && sestosa > virginia)
            printf("0\n");
            else if (versicolor > sestosa && versicolor > virginia)
                printf("1\n");
                else if (virginia > sestosa && virginia > versicolor)
                    printf("2\n");
                    else
                        printf("-1\n");
    }


return 0;
}