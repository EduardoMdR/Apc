#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define VERBOSE 1

int main(){
  int num1, num2, numero1, numero2,i=0,menor,aux;
  double proximo[100]={0};
  FILE *      arq;

  arq = fopen("pontos.dat", "r");
  scanf("%d %d", &num1, &num2);
  for(i = 0; i < 8; i++){
    aux = 0;
    fscanf(arq, "%d ", &numero1);
    fscanf(arq, "%d\n", &numero2);
    proximo[i] =  (numero1*num1) + (numero2*num2);
    aux = pow(num1,2) + pow(num2,2);
    proximo[i]/= pow(aux,0.5); 
    proximo[i] = pow(pow(proximo[i],2),0.5);
  }
  if(VERBOSE){
    for(i = 0; i < 8; i++){
      printf("%.3lf\n", proximo[i]);
    }
  }
  aux = proximo[0];
  menor = 0;
  for(i = 0; i < 8; i++){
    if(proximo[i] < aux)
      menor = i;
  }
  printf("%d", menor);
  return 0;
}
/*distancia de uma reta a um ponto
P(a,b)   Reta(x,y)

     |ax + by + c|
      √(a2 + b2)

*/