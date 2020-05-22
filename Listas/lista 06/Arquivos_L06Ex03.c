#include <stdio.h>
#include <stdlib.h>

typedef struct MOVER{
  int i;
  int linguagem;
  int genero;
  int ano;
  int tempo;
  double orc;
  char titulo[100];
}Filminho;

int Max_indice(FILE *arq){
  Filminho data;
  int max_indice = 0;
  while (fscanf(arq, "%d %s %lf %d %d %d %d", &data.i, data.titulo, &data.orc, &data.linguagem, &data.genero, &data.ano, &data.tempo) > 0)
  max_indice++;
  rewind(arq);
  return max_indice;
}

Filminho get_data(){
  Filminho novo_filme;
  scanf("%s %lf %d %d %d %d", novo_filme.titulo, &novo_filme.orc, &novo_filme.linguagem, &novo_filme.genero, &novo_filme.ano, &novo_filme.tempo);
  return novo_filme;
}

void Modificar(int index, FILE *arq){
  Filminho novo_filme = get_data();
  fseek(arq, index * sizeof(Filminho), SEEK_SET);
  fprintf(arq, "%d %s %0.lf %d %d %d %d", index, novo_filme.titulo, novo_filme.orc, novo_filme.linguagem, novo_filme.genero, novo_filme.ano, novo_filme.tempo);
  rewind(arq);
}

void Mostrar(FILE *arq){
  Filminho data;
  while(fscanf(arq, "%d %s %lf %d %d %d %d", &data.i, data.titulo, &data.orc, &data.linguagem, &data.genero, &data.ano, &data.tempo) > 0){
  printf("%d %s %0.lf %d %d %d %d", data.i, data.titulo, data.orc, data.linguagem, data.genero, data.ano, data.tempo);
  printf("\n");}
  rewind(arq);
}

int main(){
  FILE *arq;
  arq = fopen("locadora.dat","r+");
  int x_index, max_index = 0;
  max_index = Max_indice(arq);
  Mostrar(arq);
  scanf("%d", &x_index);
    while(x_index > 1){
      if(max_index > x_index){
        Modificar(x_index, arq);
        Mostrar(arq);
      }
      scanf("%d", &x_index);
      fclose(arq);
    }
  return 0;
  }
  