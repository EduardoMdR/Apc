#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, i, j=0, k;
    scanf("%d", &N);
    typedef struct{
        char nome[800];
        int idade;
    }nominho;
    nominho corno[N];
    nominho aux;
    for(i = 0; i < N; i++){
        scanf("%s %d", corno[i].nome, &corno[i].idade);
    }
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            if(corno[i].idade < corno[j].idade){
                aux = corno[i];
                corno[i]=corno[j];
                corno[j]=aux;
            }

        }
    }
    for(i = 0; i < N; i++){
        printf("%s\n", corno[i].nome);
    }
  return 0;
}
