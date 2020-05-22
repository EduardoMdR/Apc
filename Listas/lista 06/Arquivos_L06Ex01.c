#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *      arq;
    char nome[100],fim;
    int i = 0;
    int id[100], gen[100], ano[100], dur[100];
    float orc[i];
    arq = fopen("arq1.txt", "w");

    /*if (arq == NULL)
        printf("Erro");
    else
        printf("Arquivo abrido com sucesso");*/
        do{
          scanf("%s", nome);
        // palavra para testar gravacao de arquivo
            if(fim)
                break;
            scanf("%f %d %d %d %d", &orc[i], &id[i], &gen[i], &ano[i], &dur[i]);
            // usando fprintf para armazenar a string no arquivo
            fprintf(arq, "%d ", i);
            fprintf(arq, "%s ", nome);
            fprintf(arq, "%.3f ", orc[i]);
            fprintf(arq, "%d ", id[i]);
            fprintf(arq, "%d ", gen[i]);
            fprintf(arq, "%d ", ano[i]);
            fprintf(arq, "%d\n", dur[i]);
        }while(nome != "");
    fclose(arq);
    return 0;
}
