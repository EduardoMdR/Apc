#include <stdio.h>

//é permitido criar funções auxiliares, desde que não se altere nenhuma linha do método main

int conferir_contagem(int *my_hand){
	int i;
  for(i = 0; i < 4; i++){
    if(my_hand[i] > my_hand[i+1]){
      return 0;
    }
  }
  return 1;
}

void* corrigir_contagem(int *my_hand){
	int aux = 0,j,i;
  for(j = 0; j < 5; j++){
    for(i = 0; i < 4; i++){
      if(my_hand[i] > my_hand[i+1]){
        aux = my_hand[i];
        my_hand[i] = my_hand[i+1];
        my_hand[i+1] = aux;
      }
    }
  }
}
	
int main(){
	int i, mao[5];
	for(i=0; i<5; ++i)
		scanf("%d", &mao[i]);

	if(conferir_contagem(mao))printf("Contagem Correta\n");
	else{
		printf("Contagem Incorreta\n");
		printf("Sequencia certa: ");
		corrigir_contagem(mao);
		for(i=0; i<5; ++i)
			printf("%d%c", mao[i], ((i==4)? '\n' : ' '));
	}

 return 0;
}
