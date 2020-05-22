#include <stdio.h>
#include <stdlib.h>
#define MAX 9

int trocaDiagonal(int M[][9]){
    int j, aux;
    for(j = 0; j < 9; j++){
        aux = M[j][8 - j];
        M[j][8 - j] = M[j][0 + j];
        M[j][0 + j] = aux;
    }
    return 0;
}

int main()
{
  int M[MAX][MAX];
  int l, c;

  for(l=0;l<MAX;l++){
    for(c=0;c<MAX;c++){
       scanf("%d",&M[l][c]);
    }
  }

  trocaDiagonal(M);
  printf("\n");

  for(l=0;l<MAX;l++)
  {
    for(c=0;c<MAX;c++)
      printf("%d ",M[l][c]);
    printf("\n");
  }

  return 0;
}
/*
int trocaDiagonal(int M[][9]){
    int j, aux, i, c =8;
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            if(i==j){
                aux=M[i][i];
                M[i][i]=M[i][i+c];
                M[i][i+c]= aux;
            }
        }c -=2;
    }
    return 0;
}
*/
