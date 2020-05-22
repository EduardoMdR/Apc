#include <stdio.h> //ignorar 11 ao 20(caso de teste no moodle)

int main(){
    int T, N, i, k, j=0, verdade=0;
    scanf("%d %d", &T, &N);
    char sigla[N][20], aux2[N], aux3[N];
    double porcento[N],nome[N], porcento2[N];
    double entrada[N], saida[N], aux = 0;
    for(i = 0; i < N; i++){
        scanf("%s", sigla[i]);
        scanf("%lf %lf", &entrada[i], &saida[i]);
        saida[i] *= 100;
        saida[i] /= entrada[i];
        porcento[i] = saida[i];
    }

    for(i = 0; i < N; i++){
        porcento2[i]= porcento[i];
    }

    switch(T){
        case 1:
            for(i = 0; i < N; i++){
                printf("%.1lf ", porcento[i]);
                printf("%s", sigla[i]);
                printf("\n");
            }
        break;
        case 2:
            for(i=0;i<(N-1);i++){                                    //aqui eh qual numero estou verificando, vai do indice do 0 ao 7
                j+=1;                                            //aqui eh com qual estou comparando, vai indice do 1 ao 8
                for(k = 0;(k+i) > -1 ; k--){                           //verifica todos os numeros anteriores para ver se é menor, vai ate o indice 0
                    if (porcento[j+k] < porcento[i+k]){
                        aux = porcento[j+k];                         // mudaor o indice da porcentagem
                        porcento[j+k] = porcento[i+k];
                        porcento[i+k] = aux;
                        // mudar o indice da sigla
                        //aux2 = sigla[j+k];
                        //sigla[j+k] = sigla[i+k];
                        //sigla[i+k] = aux2;
                    }
                }
            }
            for(i = 0; i < N; i++){
                printf("%.1lf ", porcento[i]);
                for(j = 0; j < N; j++){
                        if(porcento2[i] == porcento[j])
                        printf("%s", sigla[j]);
                }
                printf("\n");
            }
        break;
        case 3:
            for(i=0;i<N;i++){                                    //aqui eh qual numero estou verificando, vai do indice do 0 ao 7
                j+=1;                                            //aqui eh com qual estou comparando, vai indice do 1 ao 8
                for(k = 0;(k+i) > -1 ; k--){                           //verifica todos os numeros anteriores para ver se é menor, vai ate o indice 0
                    if (porcento[j+k] < porcento[i+k]){
                        aux = porcento[j+k];                         // mudaor o indice da porcentagem
                        porcento[j+k] = porcento[i+k];
                        porcento[i+k] = aux;
                        // mudar o indice da sigla
                        //aux2 = sigla[j+k];
                        //sigla[j+k] = sigla[i+k];
                        //sigla[i+k] = aux2;
                    }
                }
            }
            for(i = (N-1); i >=0; i--){
                printf("%.1lf ", porcento[i]);
                for(j = 0; j < N; j++){
                        if(porcento2[i] == porcento[j])
                        printf("%s", sigla[j]);
                }
                printf("\n");
            }
        break;
    }
return 0;
}

