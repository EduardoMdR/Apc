#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct ptr{
    char valor[10];
    struct ptr *prox;
} *p, *num, *op; // num = números .: op = operadores;

void empilha(struct ptr *p1, char valor[10]){
    struct ptr *aux;
    aux = (struct ptr*) malloc(sizeof(struct ptr));
    strcpy(aux -> valor, valor);
    aux -> prox = p1;
    p1 = aux;
    aux = (struct ptr*) NULL;
}

void desempilha(struct ptr *p1, char *num[10]){
    struct ptr *aux;
    aux = p1;
    p1 = aux -> prox;
    aux -> prox = (struct ptr*) NULL;
    strcpy(*num,aux -> valor);
    free(aux);
    aux = (struct ptr*) NULL;
}

void cria_expressao(){
    struct ptr *aux;
    char valor[10];
    p = (struct ptr*) NULL;
    printf("Entre com a expressao: ( coloque um '.' para indicar o final )");
    scanf("%s", valor);
    if(strcmp(valor,".")){
        p = (struct ptr*) malloc(sizeof(struct ptr));
        strcpy(p -> valor,valor);
        aux = p;
        printf("Entre com a expressao: ");
        scanf("%s", valor);
        while(strcmp(valor,".")){
            aux -> prox = (struct ptr*) malloc(sizeof(struct ptr));
            aux = aux -> prox;
            strcpy(aux -> valor,valor);
            printf("Entre com a expressao: ");
            scanf("%s", valor);
        }
        aux -> prox = (struct ptr*) NULL;
        aux = aux -> prox;
    }
}

void calcula(){
    struct ptr *aux;
    int valor,resposta,a1,b1;
    char cadeia[10],*a[10],*b[10],*operador[1];
    aux = p;
    if(p == (struct ptr*) NULL)
        printf("não há expressao.");
    else{
        while(aux != (struct ptr*) NULL){
            resposta = atoi(aux -> valor);
            if(resposta)
                empilha(num,aux -> valor);
            else{
                if( ! ((strcmp(aux -> valor,"+")) || (strcmp(aux -> valor,"*"))) ){
                    empilha(op,aux -> valor);
                }
                else{
                    if(strcmp(aux -> valor,")")){
                        desempilha(num,a);
                        desempilha(num,b);
                        desempilha(op,operador);
                        a1 = atoi(a);
                        b1 = atoi(b);
                        if(!(strcmp(*operador,"+")))
                            valor = b1 + a1;
                        if(!(strcmp(*operador,"*")))
                            valor = b1 * a1;
                        itoa(valor,cadeia,10);
                        empilha(num,cadeia);
                    }
                }
            }
            aux = aux -> prox;
        }
        desempilha(num,a);
        printf("Resposta = %s", *a);
    }
}

void mostra(struct ptr *p1){
    struct ptr *aux;
    aux = p1;
    if( p1 == (struct ptr*) NULL )
        printf("não há expressao.");
    else
        while( aux != (struct ptr*) NULL ){
            printf("%s ", aux -> valor);
            aux = aux -> prox;
        }
    printf("\n");
}

int main(void)
{
    cria_expressao();
    mostra(p); // para mostrar que a expressao foi lida corretamente
    num = (struct ptr*) NULL;
    op = num;
    calcula();
    getch();

    return 0;
}
