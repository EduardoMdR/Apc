#include <stdio.h>
#include <math.h>

int main(){
    int tarefas, porcentagem[9]={0}, teste3[23]={0}, i, j;
    int candidatos[10][23]={0};
    char candidato[10][20]={0};
    double soma[9]={0};
    scanf("%d", &tarefas);

    for(i = 0; i < 23; i++){
        scanf("%d", &candidatos[0][i]);
    }
    scanf("%s", candidato[0]);
    for(i = 1; i < 10; i++){
        for(j = 0; j < 23; j++){
            scanf("%d", &candidatos[i][j]);
        }
        scanf("%s", candidato[i]);
    }
    switch(tarefas){
        case 1:
            for(i = 1; i < 10; i++){
                printf("%s:", candidato[i]);
                for(j = 0; j < 23; j++){
                    if ( candidatos[i][j] == 0)
                        printf(" N");
                    if ( candidatos[i][j] == 1)
                        printf(" F");
                    if ( candidatos[i][j] == -1)
                        printf(" C");
                }
                printf("\n");
            }
            printf("\n");
        break;
        case 2: // afinidade eleitoral
            for(i = 1; i < 10; i++){
                for(j = 0; j <23; j++){
                    if ((candidatos[0][j] == 1) && (candidatos[i][j] == 1)){
                        soma[i] += 1;}else
                        if ((candidatos[0][j] == -1) && (candidatos[i][j] == -1)){
                            soma[i] += 1;}else
                            if((candidatos[0][j] == 0) || (candidatos[i][j] == 0)){
                                soma[i] += 0.5;}else{}
                }
                soma[i] +=0.1;
                soma[i] /= 0.23;
                porcentagem[i] = soma[i];
            }
            for(i = 1; i < 10; i++){
                printf("%s: ", candidato[i]);
                printf("%d%%\n", porcentagem[i]);
            }
        break;
        case 3:
        for(j = 0; j <23; j++){
            for(i = 1; i < 10; i++){
            if (candidatos[i][j] == 1)
                teste3[j] += 1;
                if (candidatos[i][j] == -1)
                    teste3[j] -= 1;
                    if (candidatos[i][j] == 0)
                        teste3[j] += 0;
            }

          }
        printf("Ordinario:");
        for(j = 0; j < 23; j++){
          if (teste3[j] > 0)
                printf(" 1");
                if (teste3[j] < 0)
                    printf(" -1");
                    if (teste3[j] == 0)
                        printf(" 0");

        }
        break;
    }
return 0;
}
