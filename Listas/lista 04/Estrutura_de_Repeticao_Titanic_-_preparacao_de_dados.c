#include <stdio.h> //funcao 0 e 1 funcionando

int main(){

    int tarefa, i, j, N;
    scanf("%d %d", &tarefa, &N); //qual terefa fazer e quantas colunas (pessoas) vao ter
    float passageiro[N][6], media[6]={0};
    char passageiro2[N][2];

    switch (tarefa){
        case 0: //preparação dos dados;
            //printf("t = 0\n");
            for (i = 0; i < N; i++){
                //printf("Classe Sexo Idade Irmaos Filhos Porto\n");
                scanf("%f %c %f %f %f %c", &passageiro[i][0], &passageiro2[i][0], &passageiro[i][2], &passageiro[i][3], &passageiro[i][4], &passageiro2[i][1]);

                switch (passageiro2[i][0]){ //atribuir valor numerico ao sexo
                    case 'f':
                        passageiro[i][1] = 1; //f=1
                        break;
                    case 'm':
                        passageiro[i][1] = 0; //m=0
                        break;
                }

                switch (passageiro2[i][1]){ //atribuir valor numerico ao porto
                    case 'C':
                        passageiro[i][5] = 1; //c=1
                        break;
                    case 'Q':
                        passageiro[i][5] = 2; //q=2
                        break;
                    case 'S':
                        passageiro[i][5] = 0; //s=0
                        break;
                }
            }
            for (i = 0; i < N; i++){
                for(j = 0; j < 6; j++){
                    printf("%.1f ", passageiro[i][j]);
                }
                printf("\n");
            }
            break;
            //printf("Media Classe: %.3f Sexo: %.3f Idade: %.3f Irmaos: %.3f Filhos: %.3f Porto: %.3f\n", (classeS/i), (sexoS/i), (idadeS/i), (irmaosS/i), (filhosS/i), (portoS/i));

        case 1: //classificação de passageiros;
            //printf("t = 1\n");
            for (i = 0; i < N; i++){
                //printf("Classe Sexo Idade Irmaos Filhos Porto\n");
                scanf("%f %c %f %f %f %c", &passageiro[i][0], &passageiro2[i][0], &passageiro[i][1], &passageiro[i][2], &passageiro[i][3], &passageiro2[i][1]);}
            for (i = 0; i < N; i++){
                if (((passageiro[i][1] > 15) && (passageiro[i][1] <= 45))||((passageiro[i][0] > 1) && (passageiro2[i][0] == 'f')))
                    printf("Morreu\n");
                else
                    printf("Sobreviveu\n");
            }
        break;

        case 2: //cálculo da média.
            //printf("t = 2\n");
            for (i = 0; i < N; i++){
                //printf("Classe Sexo Idade Irmaos Filhos Porto\n");
                scanf("%f %c %f %f %f %c", &passageiro[i][0], &passageiro2[i][0], &passageiro[i][2], &passageiro[i][3], &passageiro[i][4], &passageiro2[i][1]);
                switch (passageiro2[i][0]){ //atribuir valor numerico ao sexo
                    case 'f':
                        passageiro[i][1] = 1; //f=1
                        break;
                    case 'm':
                        passageiro[i][1] = 0; //m=0
                        break;
                }

                switch (passageiro2[i][1]){ //atribuir valor numerico ao porto
                    case 'C':
                        passageiro[i][5] = 1; //c=1
                        break;
                    case 'Q':
                        passageiro[i][5] = 2; //q=2
                        break;
                    case 'S':
                        passageiro[i][5] = 0; //s=0
                        break;
                }

            }
            //printf("Media Classe: %.3f Sexo: %.3f Idade: %.3f Irmaos: %.3f Filhos: %.3f Porto: %.3f\n", (classeS/i), (sexoS/i), (idadeS/i), (irmaosS/i), (filhosS/i), (portoS/i));
            for (i = 0; i < N; i++){
                for(j = 0; j < 6; j++){
                    media[j] += passageiro[i][j];
                }
                printf("\n");
            }

            for(j = 0; j < 6; j++){
                media[j] /=N;
            }

            for(j = 0; j < 6; j++){
                printf("%.3f ", media[j]);
            }

        break;
    }
    return 0;
}



