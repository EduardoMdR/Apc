#include <stdio.h>
int main(){

    int salario, total = 0, diferenca = 0, tdiferenca = 0;

    do {
        scanf("%d", &salario);
        if ((salario < 500) && (salario > 0)){
            diferenca = 100;
            tdiferenca += diferenca;
            total += (salario + diferenca);
            //printf("total %d  acrecimo %d  diferenca %d\n", total,diferenca, tdiferenca);}
        }
        else
            if ((salario >= 500) && (salario < 1000)){
                diferenca = 75;
                total += salario;
                total += diferenca;
                tdiferenca += diferenca;
                //printf("total %d  acrecimo %d  diferenca %d\n", total,diferenca, tdiferenca);
                }
        else
            if (salario >= 1000){
                diferenca = 50;
                total += (salario + diferenca);
                tdiferenca += diferenca;
                //printf("total %d  acrecimo %d  diferenca %d\n", total,diferenca, tdiferenca);
                }
    }while (salario !=0);
    printf("%d\n", total);
    printf("%d", tdiferenca);
return 0;
}

